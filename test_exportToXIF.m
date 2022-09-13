
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

% run a test export
input_file = "WBC_CRF118.cif";
output_file = "WBC_CRF118_output.cif";

py.ifc.exportToXIF( input_file, output_file );





