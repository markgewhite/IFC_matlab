#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# from https://medium.com/cassandra-cryptoassets/how-to-integrate-and-run-r-in-python-1311254caf39#:~:text=Calling%20an%20R%20function%20from%20Python%20Ok%2C%20let%E2%80%99s,Let%E2%80%99s%20fetch%20the%20function%20from%20R%20into%20Python.

import os
os.environ['R_HOME'] = '/Library/Frameworks/R.framework/Resources'

import rpy2
import rpy2.robjects as robjects
from rpy2.robjects.packages import importr
import rpy2.robjects.numpy2ri as rpyn
    
def import_ifc():
    ifc_package = importr('IFC')
    
def exportToXIF( input_file_cif, output_file_cif,
                 data_dir = "/Users/markgewhite/Google Drive/Academia/Postdoc/IFC/" ):
    
    input_file_cif = data_dir + input_file_cif
    output_file_cif = data_dir + output_file_cif

    rExportToXIF = robjects.r['ExportToXIF']

    rExportToXIF( fileName = input_file_cif, 
                  write_to = output_file_cif,
                  overwrite = True, 
                  objects = robjects.IntVector([0,1,4]))


