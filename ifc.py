#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# from https://medium.com/cassandra-cryptoassets/how-to-integrate-and-run-r-in-python-1311254caf39#:~:text=Calling%20an%20R%20function%20from%20Python%20Ok%2C%20let%E2%80%99s,Let%E2%80%99s%20fetch%20the%20function%20from%20R%20into%20Python.

import os
#os.environ['R_HOME'] = '/Library/Frameworks/R.framework/Resources'
os.environ['R_HOME'] = 'C:/Programs/R/412FF6~1.1'

import rpy2
import rpy2.robjects as robjects
from rpy2.robjects.packages import importr
import rpy2.robjects.numpy2ri as rpyn

import numpy as np

def import_ifc():
    ifc_package = importr('IFC')
    ifc_data_package = importr('IFCdata')


def getOffsets( input_file ):
    
    rGetOffsets = robjects.r['getOffsets']
    
    offsets_r = rGetOffsets(fileName = input_file, \
                            fast = True, \
                            display_progress = False )
    
    return offsets_r


def getInfo( input_file ):
    
    rGetInfo = robjects.r['getInfo']
    
    info_r = rGetInfo( input_file, \
                       'analysis' )
    
    return info_r


def getIFD( input_file, offsets_r, idx ):
    
    rGetIFD = robjects.r['getIFD']
    rSubsetOffsets = robjects.r['subsetOffsets']
    
    idx_r = robjects.IntVector(idx)
    
    sub_offs_r = rSubsetOffsets(offsets_r, \
                              objects = idx_r, \
                              image_type = 'img')
    
    IFDs_r = rGetIFD( fileName = input_file, offsets = sub_offs_r )

    return IFDs_r


def extractImagesToMatrix( input_file, idx = None ):
    
    rExtractImagesToMatrix = robjects.r['ExtractImages_toMatrix']
    
    if idx is None:
        imgs_r = rExtractImagesToMatrix(fileName = input_file,
                                        display_progress = False)
    else:
        idx_r = robjects.IntVector(idx)
        imgs_r = rExtractImagesToMatrix(fileName = input_file,
                                        objects = idx_r,
                                        display_progress = False)
    
    nImgs = len(imgs_r)
    imgs = list()
    for i in range(nImgs):
        imgs.append( np.asarray(imgs_r[i]) )

    return imgs



