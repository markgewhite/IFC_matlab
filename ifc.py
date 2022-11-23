#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# from https://medium.com/cassandra-cryptoassets/how-to-integrate-and-run-r-in-python-1311254caf39#:~:text=Calling%20an%20R%20function%20from%20Python%20Ok%2C%20let%E2%80%99s,Let%E2%80%99s%20fetch%20the%20function%20from%20R%20into%20Python.

import os
os.environ['R_HOME'] = '/Library/Frameworks/R.framework/Resources'

import rpy2
import rpy2.robjects as robjects
from rpy2.robjects.packages import importr
import rpy2.robjects.numpy2ri as rpyn

import numpy as np

def import_ifc():
    ifc_package = importr('IFC')
    ifc_data_package = importr('IFCdata')
 

def intVector_to_int( xr ):
    
    n = len(xr)
    x = np.zeros([n,1]).astype(int)
    for i in range(len(xr)):
        x[i] = xr[i]
        
    # x = x.transpose()
    return x

    
def getOffsets( input_file ):
    
    rGetOffsets = robjects.r['getOffsets']
    
    offsets_r = rGetOffsets(fileName = input_file, \
                            fast = True, \
                            display_progress = False )
    offsets = intVector_to_int( offsets_r )
    
    return offsets, offsets_r


def getInfo( input_file ):
    
    rGetInfo = robjects.r['getInfo']
    
    info_r = rGetInfo( input_file, \
                       'analysis' )
    
    return info_r


def getIFD( input_file, offset_selection ):
    
    rGetIFD = robjects.r['getIFD']
    selection_r = robjects.IntVector(offset_selection.astype(int))
    
    IFDs_r = rGetIFD( fileName = input_file, offsets = selection_r )

    return IFDs_r


def objectExtract( IFDs, info, img_type = 'raw' ):
    
    rObjectExtract = robjects.r['objectExtract']
    
    if img_type=='raw':
    
        img = rObjectExtract(ifd = IFDs, \
                             info = info, \
                             mode = 'raw', \
                             export = 'matrix')
    
    elif img_type=='rgb':
        img = rObjectExtract(ifd = IFDs, \
                             info = info, \
                             mode = 'rgb', \
                             export = 'base64', \
                             base64_id = True)

    return img

    
def exportToXIF( input_file_cif, output_file_cif,
                 data_dir = "/Users/markgewhite/Google Drive/Academia/Postdoc/IFC/" ):
    
    input_file_cif = data_dir + input_file_cif
    output_file_cif = data_dir + output_file_cif

    rExportToXIF = robjects.r['ExportToXIF']

    rExportToXIF( fileName = input_file_cif, 
                  write_to = output_file_cif,
                  overwrite = True, 
                  objects = robjects.IntVector([0,1,4]))


