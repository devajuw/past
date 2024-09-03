% Determine whether the given year iis leap year or not

year = input('Enter a year: ');
if mod(year, 400) == 0
fprintf('%6u is a leap year\n', year);
elseif mod(year, 4) == 0 && mod(year, 100) ~= 0
fprintf('%6u is a leap year\n', year);
else
fprintf('%6u is not a leap year\n', year);
end

%4u - 4 Digit Number
%6.4f - Real Number that preserves 4 digits to the right of the floating point




