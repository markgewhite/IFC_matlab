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

### R installation

R will need to be installed on your system to run the IFC package. The latest version can be installed from [https://cran.r-project.org/mirrors.html](https://cran.r-project.org/mirrors.html). 

1. Choose the download site (CRAN Mirror) nearest to you
2. Click on the download link for your operating system (e.g. Download R for ...)
3. Click on the package/binaries suitable for your OS version (base)
4. Follow the usual prompts to install the software using the defaults ('User Installation')

If you are installing in Windows, copy the Program Files folder for R that you are asked to confirm during the installation. Open Notepad (or another text editor) and paste the path as a single line into the file. Save the file as <code>r_home_path.txt</code> in the same directory as the Matlab code will reside (see below). This step is necessary because in the R installation on windows does not add R_HOME to the PATH environment variable. If you have a Mac, this file is created automatically by the Makefile (see below). 

You can also obtain R_HOME by opening R Studio and typing:
```Unix
> R.home()
```
Copy and paste the command's output into the file <code>r_home_path.txt</code>.

Later when running Matlab, you don't need R Studio open.

### Python installation

Python will need to be installed as well to provide the interface between Matlab and R. Check which Python version is compatible with your version of Matlab [here](https://uk.mathworks.com/support/requirements/python-compatibility.html). Matlab R2022b supports Python 3.8, 3.9, and 3.10, but not 3.11. Also check the Python version is compatible with the RPY2 package [here](https://github.com/rpy2/rpy2).


You can download a compatible version of Python from [https://www.python.org/downloads/](https://www.python.org/downloads/).

1. Download the package/binaries
2. Run the executable installer
3. Click checkbox "Add Python to PATH"
4. Select default or custom installation

If you choose a custom installation, the following are required:
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

### Repository installation

Download this repository as follows:

1. Click on the green Code button above, selecting Download ZIP. 
2. Open the downloaded ZIP file and save the files to a suitable directory.
3. Navigate to that directory at the command line.

If you have a Bash shell or similar (Terminal on MacOS), you can run a Makefile to install the R packages and Python modules automatically. At the command line, simply type:

```Unix
> make 
```

The makefile creates a Python virtual environment called <code>ifc_pyenv</code> in a sub-directory of the same name and activates it. It also stores the R home directory in <code>r_home_path.txt</code>, which is read by the Python IFC module on initialization. 

If you don't have such access, you can use the Windows MSDOS command line, typing the following commands:

```Unix
> python -m venv ifc_pyenv
> ifc_pyenv\Scripts\activate
> pip install numpy rpy2
```

Also make sure you have created the file <code>r_home_path.txt</code> (see above).

## Getting started

Launch Matlab and open <code>cif_demo.m</code>. Initialization of the Python environment is required from within Matlab, a task that is performed by the function <code>init_ifc()</code>, which requires the path to the Python environment as a single argument.

```Matlab
py_path = './ifc_pyenv';
pythonEnv = init_ifc( py_path );
```

(The demo assumes the Python environment - just a file structure - is a sub-directory where the Matlab code is located.)
 
It is then straightforward to extract images from a given file - see <code>cif_demo.m</code>. The function is:

```Matlab
img = extractImagesToArray(cif_file, img_idx_selection);
```
The output is a cell array of multi-channel arrays.

This is the first of several functions that will be added.

A test CIF file can be obtained [here](https://drive.google.com/file/d/1F2P3BPfnDOwwUzirtLN-WbPVb-pM1HQ-/view?usp=share_link): 

