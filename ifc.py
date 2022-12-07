#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# from https://medium.com/cassandra-cryptoassets/how-to-integrate-and-run-r-in-python-1311254caf39#:~:text=Calling%20an%20R%20function%20from%20Python%20Ok%2C%20let%E2%80%99s,Let%E2%80%99s%20fetch%20the%20function%20from%20R%20into%20Python.

import os

r_ref_filename = 'r_home_path.txt'
#check if file is present
if os.path.isfile(r_ref_filename):
    #open text file in read mode
    r_ref_file = open(r_ref_filename, "r")
 
    #read whole file to a string
    r_home_path = r_ref_file.read()

    # remove newline character if present
    if '\n' in r_home_path:
        r_home_path = r_home_path[:-1]

    #close file
    r_ref_file.close()

else:
    print('Cannot find R reference file: r_home_path.txt')
 
os.environ['R_HOME'] = r_home_path

import rpy2.robjects as robjects
from rpy2.robjects.packages import importr
import rpy2.robjects.numpy2ri as rpyn

import numpy as np


def import_ifc():
    
    ifc_package = importr('IFC')


def getOffsets( input_file ):
    
    rGetOffsets = robjects.r['getOffsets']
    
    offsets_r = rGetOffsets(fileName = input_file, \
                            fast = True, \
                            display_progress = False )
    
    return offsets_r


def getInfo( input_file ):
    
    rGetInfo = robjects.r['getInfo']
    
    info_r = rGetInfo( input_file, 'analysis' )
    
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



