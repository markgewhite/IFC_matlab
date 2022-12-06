# MATLAB tools for Imaging Flow Cytometry (IFC)

## Access to the IFC package from MATLAB

The IFC package provides functions for processing CIF files. The package is written in R (with C++ functions at its core) without an equivalent Matlab implementation.  
[https://github.com/gitdemont/IFC](https://github.com/gitdemont/IFC)

This repository contains Matlab wrapper functions that call these R IFC functions, thereby making available the highly regarded IFC library to Matlab users. Since it is not currently possible to call R functions directly from Matlab, access is made possible via Python using the RPY2 module. 
[https://github.com/rpy2/rpy2](https://github.com/rpy2/rpy2)

Matlab has a well-developed interface with Python, permitting function calls and extensive interoperability between variable types.
[https://uk.mathworks.com/help/matlab/python-language.html](https://uk.mathworks.com/help/matlab/python-language.html)

R and Python need to be installed (see instructions below) in a one-time operation. These applications do not need to be open when running Matlab.

It may seem like a hassle to install the R and Python environments (if they don't already exist on your computer), but this way you the latest version of the IFC is always available. The alternative would be to translate the extensive IFC package into Matlab and constantly maintain it. 
  

## Installation

### Repository installation

Download this repository as follows:

1. Click on the green Code button above, selecting Download ZIP. 
2. Open the downloaded ZIP file and save the files to a suitable directory for the Matlab and Python code.


### R installation

R will need to be installed on your system to run the IFC package. The latest version can be installed from [https://cran.r-project.org/mirrors.html](https://cran.r-project.org/mirrors.html). 

1. Choose the download site (CRAN Mirror) nearest to you
2. Click on the download link for your operating system (e.g. Download R for ...)
3. Click on the package/binaries suitable for your OS version (base)
4. Follow the usual prompts to install the software using the defaults ('User Installation')

If you are installing in Windows, copy the Program Files folder for R that you are asked to confirm during the installation. Open Notepad (or another text editor) and paste the path as a single line into the file. Save the file as <code>r_home_path.txt</code> in the same directory as the Matlab code (see above). 

This step is necessary because in the R installation on windows does not add R_HOME to the PATH environment variable. 

Alternatively, if you have a Mac, this file can be created automatically in Terminal:
```Unix
> R RHOME > r_home_path.txt 
```

You can also obtain R_HOME by opening R Studio and typing:
```Unix
> R.home()
```
Then copy and paste output into the file <code>r_home_path.txt</code> saving it in the same directory as the Matlab files.

Later when running Matlab, you don't need R Studio open.

### Python installation

Python will need to be installed as well to provide the interface between Matlab and R. Check which Python version is compatible with your version of Matlab [here](https://uk.mathworks.com/support/requirements/python-compatibility.html). Matlab R2022b supports Python 3.8, 3.9, and 3.10, but not 3.11. Also check the Python version is compatible with the RPY2 package [here](https://github.com/rpy2/rpy2).

You can download a compatible version of Python from [https://www.python.org/downloads/](https://www.python.org/downloads/).

1. Download the package/binaries
2. Run the executable installer
3. Click checkbox "Add Python to PATH"
4. Select custom installation - see below

If, as is most likely, the latest version of Python is not compatible with Matab, you will need to click on link for your operating system and then find the suitable version. There are lots of options. For Windows, the "Windows installer (64-bit)" is recommended. For Mac, choose the installer for your CPU type.  

For the custom installation, the following are required:
 - Install for all users
 - Optional Features: pip, py launcher
 - Advanced Options: Associate files with Python, Add Python to environment variables.

Check that python has been installed correctly by launching the command line (if you already had the command line open, close and re-start it):
```Unix
> python --version
```

If command is not recognised, then you might have forgotten to click set PATH during the installation. Helpful instructions can be found [here](https://www.digitalocean.com/community/tutorials/install-python-windows-10as) well as elsewhere. If you want to know more about Python virtual environments, try this [primer](https://realpython.com/python-virtual-environments-a-primer/).

Check that the package installer, pip, was installed with Python:

```Unix
> pip --version
```

If not, go to [https://pip.pypa.io/en/stable/](https://pip.pypa.io/en/stable/).

The final step is to install the required Python modules into the default Python environment using pip:
```Unix
> pip install numpy rpy2
```

However, if you want to use a virtual environment don't execute this command yet. Move to the following section instead.

### Optional: Python virtual environment

The following creates a virtual environment called <code>ifc_pyenv</code> for demonstration purposes. Decide where to store the virtual environment and move to that directory where the environment will become a sub-directory. 

For Mac:
```Unix
> python3 -m venv ifc_pyenv
> source ifc_pyenv/bin/activate
(ifc_pyenv) > pip install numpy rpy2
```

For Windows:
```Unix
> python -m venv ifc_pyenv
> ifc_pyenv\Scripts\activate
(ifc_env) > pip install numpy rpy2
```

In Matlab, you need to specify the full path to your environment's Python executable using the command <code>pyenv</code>, which loads the Python environment. e.g.
```Matlab
pyEnvPath = 'path/to/bin/python'; 
pyEnv = pyenv('Version', pyEnvPath );
```
It is best to load the environment outside of a function in case you need to change it. Calling a function implicitly Python using the previous environment. It cannot be changed within the function (a Matlab 'bug'). If you are using the default environment, calling <code>pyenv</code> is unnecessary as Matlab will automatically use load the environment when the first <code>py.</code> function is called. See the Matlab documentation on <code>pyenv</code> [here](https://uk.mathworks.com/help/matlab/ref/pyenv.html).


## Getting started

Launch Matlab and open <code>cif_demo.m</code>. Specify the virtual environment if you're using one, but otherwise the code can just run. The <code>init_ifc()</code>, loads the Python <code>ifc.py</code> which depends on the Python RPY2 package library. The initialization funciton then imports the R IFC package.  

It is then straightforward to extract images from a given file - see <code>cif_demo.m</code>. The function is:

```Matlab
img = extractImagesToArray(cif_file, img_idx_selection);
```
The output is a cell array of multi-channel arrays.

This is the first of several functions that will be added.

A test CIF file can be obtained [here](https://drive.google.com/file/d/1F2P3BPfnDOwwUzirtLN-WbPVb-pM1HQ-/view?usp=share_link): 

