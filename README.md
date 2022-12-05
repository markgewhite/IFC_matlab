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
2. Click on the download link for your operating system
3. Click on the package suitable for your OS version.
4. Follow the usual prompts to install the software using the defaults

You don't need to open the R Studio application. What matters is the R binaries are installed.

### Python installation

The latest version of Python is available for installation here: [https://www.python.org/downloads/](https://www.python.org/downloads/). The web page should offer the latest version of Python for your operating system directly. Install the package following the usual prompts for software installation on your system. Accept the defaults.

At the command line, check that python was installed correctly:
```Unix
> python --version
```

The minimum version for Python depend on the RPY2 package, which can be confirmed [here](https://github.com/rpy2/rpy2).

Check that the package installer, pip, was installed with Python:

```Unix
> pip --version
```

If not, go to [https://pip.pypa.io/en/stable/](https://pip.pypa.io/en/stable/).

### Package installation

The installation of the R packages and Python modules is automated by a Makefile. Simply type:

```Unix
> make 
```

at the command line when in the directory where this repository is deployed. The makefile creates a Python virtual environment called <code>ifc_pyenv</code> in a sub-directory of the same name and activates it. It also stores the R home directory in <code>r_home_path.txt</code>, which is read by the Python IFC module on initialization. 

If that fails, you can create <code>r_home_path.txt</code> manually by copying and pasting the output into a text file with this name. At the command ltine, in a Unix environment, such as Mac OS:
```Unix
> R RHOME
```
In Windows:
```Windows
> %R_HOME%
```

## Getting started

In Matlab, for initialization the Python environment needs to be identified and the IFC package needs to be loaded. The single argument to <code>init_ifc()</code> specifies where the Python environment's executable is to be found.

```Matlab
py_path = './ifc_pyenv/bin/python';
pythonEnv = init_ifc( py_path );
```

It is then straightforward to extract images from a given file - see <code>cif_demo.m</code>. The function is:

```Matlab
img = extractImagesToArray(cif_file, img_idx_selection);
```
The output is a cell array of multi-channel arrays.

This is the first of several functions that will be added.

A test CIF file can be obtained [here](https://drive.google.com/file/d/1F2P3BPfnDOwwUzirtLN-WbPVb-pM1HQ-/view?usp=share_link): 

