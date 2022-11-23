% Test TIFF reader

path = fileparts( which('testTiffReader.m') );
cd(path);
filename = 'Agrostis_gigantea_32_.cif';

[Info,I] = tiff_read_header( filename );

