% Demo MATLAB script for retrieving CIF raw data arrays %

clear;

% initialize
cif_path = fileparts( which('cif_demo.m') );
cif_file = fullfile( cif_path, 'data/example.cif' );
py_path = fullfile( cif_path, 'ifc_pyenv' );

pythonEnv = init_ifc( py_path );

% run a test export
img_idx_selection = 1:20;
img = extractImagesToArray( cif_file, img_idx_selection );

