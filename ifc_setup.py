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

base = importr('base')
pi = robjects.r('pi')

vector = np.asarray(pi)

robjects.r(''' mat <- matrix(runif(10), 5, 2)''')

r_mat = robjects.globalenv['mat']

r_mat = np.asarray(r_mat)


# from https://rpy2.github.io/doc/latest/html/introduction.html

from rpy2.robjects.packages import importr
# import R's "base" package
base = importr('base')

# import R's "utils" package
utils = importr('utils')

# import rpy2's package module
import rpy2.robjects.packages as rpackages

# import R's utility package
utils = rpackages.importr('utils')

# select a mirror for R packages
utils.chooseCRANmirror(ind=1) # select the first mirror in the list

# R package names
packnames = ('ggplot2', 'hexbin')

# R vector of strings
from rpy2.robjects.vectors import StrVector

# Selectively install what needs to be install.
# We are fancy, just because we can.
names_to_install = [x for x in packnames if not rpackages.isinstalled(x)]
if len(names_to_install) > 0:
    utils.install_packages(StrVector(names_to_install))
    
robjects.r('''
        # create a function `f`
        f <- function(r, verbose=FALSE) {
            if (verbose) {
                cat("I am calling f().\n")
            }
            2 * pi * r
        }
        # call the function `f` with argument value 3
        f(3)
        ''')
        
r_f = robjects.globalenv['f']
# or
r_f = robjects.r['f']

print(r_f.r_repr())
res = r_f(3)


# try this out
ifc_package = importr('IFC')

robjects.r('''
            data_dir <- "/Users/markgewhite/Google Drive/Academia/Postdoc/IFC/"
            input_file_cif <- paste0( data_dir, "WBC_CRF118.cif" )
            output_file_cif <- paste0( data_dir, "WBC_CRF118_output.cif" )
            
            exported <- ExportToXIF(fileName = input_file_cif, 
                                    write_to = output_file_cif,
                                    overwrite = TRUE, 
                                    objects = c(0,1,4))
            ''')
            
data_dir = "/Users/markgewhite/Google Drive/Academia/Postdoc/IFC/"
input_file_cif = data_dir + "WBC_CRF118.cif"
output_file_cif = data_dir + "WBC_CRF118_output.cif"

rExportTOXIF = robjects.r['ExportToXIF']

rExportTOXIF( fileName = input_file_cif, 
              write_to = output_file_cif,
              overwrite = True, 
              objects = robjects.IntVector([0,1,4]))



