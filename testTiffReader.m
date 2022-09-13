% Test TIFF reader

path = fileparts( which('testTiffReader.m') );
cd(path);
filename = 'ArchedHeadStand.tiff';
filename = 'WBC_CRF118.cif';

[Info,I] = tiff_read_header( filename );

