install.packages(c("Rcpp", "xml2", "png", "tiff", "jpeg", "utils", "grid", "gridExtra", "gridGraphics", "lattice", "latticeExtra", "KernSmooth", "DT", "visNetwork"))
install.packages("remotes")
#install.packages("IFC", repos = "https://gitdemont.github.io/IFC/", type = "source")
remotes::install_github(repo = "gitdemont/IFC", ref = "master", dependencies = FALSE)
