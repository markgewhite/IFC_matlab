function [pythonEnv, module] = init_ifc( pyEnvPath )
    % Initialize the IFC package

    if nargin==0
        % identify the default python environment
        pythonEnv = pyenv;
    
    else   
        % identify the specified python environment
        pythonEnv = pyenv('Version', pyEnvPath );
    end
    
    % add IFC module to python path
    ifcPath = fileparts(which('ifc.py'));
    if count(py.sys.path, ifcPath) == 0
        insert( py.sys.path, int32(0), ifcPath) ;
    end
    
    % import the Python IFC module
    module = py.importlib.import_module('ifc');
    
    % import the R IFC module
    py.ifc.import_ifc();

end