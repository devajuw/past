
% Draw a curve %

a = 0:0.5:5;
b = (2.*(a.^2)) + (3.*a) - 5;
plot(a, b)

% Note that the ^ operator in MATLAB is for element-wise exponentiation, so you need to use .^ to exponentiate each 
% element in the a array. Similarly, the * operator is for element-wise multiplication, so you need to use .* to multiply each 
% element in the arrays a and 3.

%Refine the Same Plot with line pattern color & thickness%

a = 0:0.5:5;
b = (2.*(a.^2)) + (3.*a) - 5;
plot(a, b,'-^g','MarkerFaceColor','y','LineWidth',2)
xlabel('x');
ylabel('y');
legend('Test','Location','northwest');


% Note that the spelling of the MarkerFaceColor argument is corrected, and the Location argument in the legend function is 
% capitalized. The '-or' argument specifies the line style (- for solid) and marker symbol (o for a circle), and the 'MarkerFaceColor',
% 'g' argument sets the marker fill color to green. The 'LineWidth',2 argument sets the line width to 2.

%3D GRAPH%

a = 0:0.5:5;
b = (2.*(a.^2)) + (3.*a) - 5;
z = b;
plot3(a, b, z, '^g', 'MarkerFaceColor', 'g')
xlabel('x');
ylabel('y');
zlabel('z');
legend('Test','Location','northwest');

