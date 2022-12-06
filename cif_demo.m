% Demo MATLAB script for retrieving CIF raw data arrays %

clear;
useVirtualEnv = false; % optional

% initialize
cif_path = fileparts( which('cif_demo.m') );
cif_file = fullfile( cif_path, 'example.cif' );

if useVirtualEnv
    % Specify path to your own environment's Python executable here
    % it is best to load the environment outside of a function
    % in case you need to change it. Calling a function implicitly 
    % loads Python using the previous environment. It cannot be 
    % changed within the function (a Matlab 'bug').
    pyEnvPath = 'path/to/bin/python'; 
    pyEnv = pyenv('Version', pyEnvPath );
end

% initialize the Python IFC module
init_ifc;

% run a test export
img_idx_selection = 1:20;
img = extractImagesToArray( cif_file, img_idx_selection );

