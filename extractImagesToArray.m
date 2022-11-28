function img = extractImagesToArray( file, selection)
    % Extract (selected) images from a file 

    data = py.ifc.extractImagesToMatrix( file, selection );

    img = cell(data);
    for i = 1:length(img)
        img{i} = single(img{i});
    end

end