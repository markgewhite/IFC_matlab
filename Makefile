# define the name of the virtual environment directory
VENV := ifc_pyenv

# default target, when make executed without arguments
all: venv

$(VENV)/bin/activate: requirements.txt
	python3 -m venv $(VENV)
	./$(VENV)/bin/pip install -r requirements.txt
	R RHOME > r_home_path.txt 

# venv is a shortcut target
venv: $(VENV)/bin/activate

clean:
	deactivate
	rm -rf $(VENV)
	find . -type f -name '*.pyc' -delete

.PHONY: all venv clean
