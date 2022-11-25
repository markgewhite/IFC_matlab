% Demo MATLAB script for retrieving CIF raw data arrays %

clear;

pythonEnv = pyenv;
if strcmp( pythonEnv.Version, "" )
    % identify the python environment
    pyenv('Version','/Users/markgewhite/opt/anaconda3/bin/python3');
end

% add IFC module to python path
pythonPath = fileparts(which('ifc.py'));
if count(py.sys.path, pythonPath) == 0
    insert( py.sys.path, int32(0), pythonPath) ;
end

% import the Python IFC module
module = py.importlib.import_module('ifc');

% import the R IFC module
py.ifc.import_ifc();

% run a test export
cif_path = fileparts( which('cif_demo.m') );
cif_file = fullfile( cif_path, "Agrostis_gigantea_32_.cif" );

selection = 1:20;
data = py.ifc.extractImagesToMatrix( cif_file, selection );

img = cell(data);
clear data;
for i = 1:length(img)
    img{i} = single(img{i});
end
