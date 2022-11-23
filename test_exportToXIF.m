
pythonEnv = pyenv;
if strcmp( pythonEnv.Version, "" )
    % identify the python environment
    pyenv('Version','/Users/markgewhite/opt/anaconda3/bin/python3');
end

% add test module to python path
pythonPath = fileparts(which('ifc.py'));
if count(py.sys.path, pythonPath) == 0
    insert( py.sys.path, int32(0), pythonPath) ;
end

% import the module
module = py.importlib.import_module('ifc');

% import the R IFC module
py.ifc.import_ifc();

% set the files
cif_path = 
cif_file = "Agrostis_gigantea_32_.cif";

py.ifc.exportToXIF( input_file, output_file );





