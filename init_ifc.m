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
    % temporarily change the working directory to where 
    % r_home_path file can be found
    rHomePath = fileparts(which('r_home_path.txt'));
    current_dir = pwd;
    cd( rHomePath );
    module = py.importlib.import_module('ifc');
    cd( current_dir );

    % import the R IFC module
    py.ifc.import_ifc;

end