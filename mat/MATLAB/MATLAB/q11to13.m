%11.Write the code for matlab to Create the following 3 matrices : A = [ 5 2 4, 1 7 -3, 6 -10 0] B = [ 11 5 -3, 0 -12 4, 2 6 1] 
% C = [ 7 14 1, 10 3 -2, 8 -5 9] Calculate A + B and B + A to show that addition of matrices is commutative
%12. Calculate A + (B+C) and (A+B) + C to 
%13. Calculate 5(A + C) and 5A + 5C to show that, when matrices are multiplied by a scalar, the multiplication 
%is distributive. 


A = [5 2 4; 1 7 -3; 6 -10 0];
B = [11 5 -3; 0 -12 4; 2 6 1];
C = [7 14 1; 10 3 -2; 8 -5 9];

a=A + B
b=B + A


c=A + (B + C)
d=(A + B) + C

e=5*(A + C)
f=5*A + 5*C

