#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Nov 23 17:59:27 2022

@author: markgewhite
"""
import numpy as np
import ifc as ifc

offsets_r = ifc.getOffsets( 'Agrostis_gigantea_32_.cif' )
info = ifc.getInfo( 'Agrostis_gigantea_32_.cif' )
sel = np.arange(10)
ifds = ifc.getIFD( 'Agrostis_gigantea_32_.cif', offsets_r, sel )
data = ifc.objectExtract( ifds, info )