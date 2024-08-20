% Read data from Excel file
[num, txt, raw] = xlsread('filename.xlsx', 'Sheet1', 'A1:B3');
% num is a matrix containing the numeric values from cells A1:B3
% txt is a cell array containing any text values from cells A1:B3
% raw is a cell array containing the raw data from cells A1:B3

% Manipulate data
new_num = num + 1;

% Write data back to Excel
xlswrite('filename.xlsx', new_num, 'Sheet1', 'C1:D3');

% We first read the numeric and text values from cells A1:B3 in Sheet1 of file "filename.xlsx".
% We add 1 to the numeric values, then write the new values to cells C1:D3 in Sheet1 of the
% same file