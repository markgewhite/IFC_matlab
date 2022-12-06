function [pythonEnv, module] = init_ifc( pyEnvPath )
    % Initialize the IFC package

    if nargin==1
        if ischar(pyEnvPath) || isstring(pyEnvPath)
            if isfolder(pyEnvPath)
                if ismac
                    % path to the binaries is straightforward
                    pyBinPath = fullfile([ pyEnvPath '/bin/python']);
                else
                    % get binaries path from environment config file
                    pyBinPath = getBinPath( pyEnvPath );
                end
            else
                error('Python environment path is not a recognised path.');
            end
        else
            error('Python environment path is not a char or string variable.');
        end
    else
        error('Python environment path has not been specified.');
    end
    
    % identify the specified python environment
    pythonEnv = pyenv('Version', pyBinPath );

    % add IFC module to python path
    ifcPath = fileparts(which('ifc.py'));
    if count(py.sys.path, ifcPath) == 0
        insert( py.sys.path, int32(0), ifcPath) ;
    end
   
    % import the Python IFC module
    % temporarily change the working directory to where 
    % r_home_path file can be found
    rHomePath = fileparts(which('r_home_path.txt'));
    if empty(rHomePath)
        error('r_home_path.txt does not exist. It should specify the path to R HOME.');
    end
    current_dir = pwd;
    cd( rHomePath );
    module = py.importlib.import_module('ifc');
    cd( current_dir );

    % import the R IFC module
    py.ifc.import_ifc;

end


function path = getBinPath( pyEnvPath )
    % get binaries path from environment config file

    % read the configuration file
    configFile = fullfile([ pyEnvPath '/pyvenv.cfg']);
    fid = fopen( configFile );
    fileText = textscan( fid, '%s = %s');
    fclose( fid );

    % check if any lines specify the executable
    hasExec = cellfun( @(s) strcmp(s, 'executable'), fileText , ...
                       'UniformOutput', false);
    if any(hasExec{1})
        path = fileText{2}{hasExec{1}};
    else
        error(['Executable not specified in ' configFile]);
    end

end