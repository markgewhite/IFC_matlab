% Demo MATLAB script for retrieving CIF raw data arrays %

clear;

% initialize
%pythonEnv = init_ifc( '/Users/markgewhite/opt/anaconda3/envs/ifc‑test/bin/python' );
%pythonEnv = init_ifc( '/Users/markgewhite/opt/anaconda3/envs/spyder-env/bin/python' );
pythonEnv = init_ifc( '/Users/markgewhite/opt/anaconda3/envs/ifctest/bin/python' );


% run a test export
cif_path = fileparts( which('cif_demo.m') );
cif_file = fullfile( cif_path, "data/example.cif" );

img_idx_selection = 1:20;
img = extractImagesToArray( cif_file, img_idx_selection );

