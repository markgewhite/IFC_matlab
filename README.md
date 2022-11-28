# MATLAB tools for Imaging Flow Cytometry (IFC)

## Access to the IFC package from MATLAB

The IFC package provides functions for processing CIF files. The package is written in R (with C++ functions at its core) without an equivalent Matlab implementation.  
[https://github.com/gitdemont/IFC](url)

This repository contains Matlab wrapper functions that call these R IFC functions, thereby making available the highly regarded IFC library to Matlab users. Since it is not currently possible to call R functions directly from Matlab, access is made possible via Python using the RPY2 module. 
[https://github.com/rpy2/rpy2](url)

Matlab has a well-developed interface with Python, permitting function calls and extensive interoperability between variable types.
[https://uk.mathworks.com/help/matlab/python-language.html](url)

R and Python need to be installed (see instructions below) in a one-time operation. These applications do not need to be open when running Matlab.

It may seem like a hassle to install the R and Python environments (if they don't already exist on your computer), but this way you the latest version of the IFC is always available. The alternative would be to translate the extensive IFC package into Matlab and constantly maintain it. 
  

## Installation

### R installation

R will need to be installed on your system to run the IFC package. The latest version can be installed from [https://cran.r-project.org/mirrors.html](url). 

1. Choose the download site (CRAN Mirror) nearest to you
2. Click on the download link for your operating system
3. Click on the package suitable for your OS version.
4. Follow the usual prompts to install the software using the defaults

You don't need to open the R Studio application. What matters is the R binaries are installed.

### Python installation

The latest version of Python is available for installation here: [https://www.python.org/downloads/](url). The web page should offer the latest version of Python for your operating system directly. Install the package following the usual prompts for software installation on your system. Accept the defaults.

At the command line, check that python was installed correctly:
```Unix
> python --version
```

The minimum version for Python depend on the RPY2 package, which can be confirmed [here](https://github.com/rpy2/rpy2).

Check that the package installer, pip, was installed with Python:

```Unix
> pip --version
```

If not, go to [https://pip.pypa.io/en/stable/](url).

### Package installation

We aim to provide a makefile shortly to automate the installation of the R packages and Python modules, which are relatively few. 

In the meantime, execute the following commands, responding to the prompts: 
```Unix
> Rscript install_IFC_packages.R 
> pip install numpy
> pip install rpy2
```

If the installations proceed successfully, the final step is to identify the R environment home. In a Unix environment, such as Mac OS:
```Unix
> R RHOME
```
In Windows:
```Windows
> %R_HOME%
```
Copy the command line response. Open <code>ifc.py</code> using your preferred text/code editor and modify the <code>R_HOME</code> definition, which can be found close to the beginning of the file: 

e.g.

<code>os.environ['R_HOME'] = '/Library/Frameworks/R.framework/Resources'</code>

and save the file.

**NOTE: if you modify the Python code, Matlab has to be restarted.**


## Getting started

In Matlab, for initialization the Python environment needs to be identified and the IFC package needs to be loaded. 

```Matlab
pythonEnv = init_ifc;
```

By default, Matlab identifies the base Python environment, but if you want to provide another environment you can do so by identifying it in the function call.

```Matlab
pythonEnv = init_ifc(python_path);
```

It is then straightforward to extract images from a given file - see <code>cif_demo.m</code>. The function is:

```Matlab
img = extractImagesToArray(cif_file, img_idx_selection);
```
The output is a cell array of multi-channel arrays.

This is the first of several functions that will be added.

