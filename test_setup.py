#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# from https://medium.com/cassandra-cryptoassets/how-to-integrate-and-run-r-in-python-1311254caf39#:~:text=Calling%20an%20R%20function%20from%20Python%20Ok%2C%20let%E2%80%99s,Let%E2%80%99s%20fetch%20the%20function%20from%20R%20into%20Python.

import os
os.environ['R_HOME'] = '/Library/Frameworks/R.framework/Resources'

import numpy as np
import rpy2
import rpy2.robjects as robjects
from rpy2.robjects.packages import importr
import rpy2.robjects.numpy2ri as rpyn

def test_pi():
    base = importr('base')
    pi = robjects.r('pi')
    
    pi_np = np.asarray(pi)
    print(pi_np)
    
    
def test_rand_mat():
    robjects.r(''' mat <- matrix(runif(10), 5, 2)''')
    
    r_mat = robjects.globalenv['mat']
    
    r_mat = np.asarray(r_mat)
    
    print(r_mat)
    
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


