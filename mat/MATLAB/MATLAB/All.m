%QUESTION 1

x=(35.7 * 64 * 7^3) / (45 + 5*5)

%QUESTION 2

result = (5/4)*7*6^2 + (3^(7/9))^3 - 652;
disp(result)

%QUESTION 3

x = 2;
x = x + 3;
disp(x)
result1 = x + 1*2;
result2 = (x+1)*2;
disp(result1)
disp(result2)

theta = 45;
theta = (theta/180)*pi; % convert to radians
sin_theta = sin(theta);
cos_theta = cos(theta);

result = sin_theta^2 + cos_theta^2;

disp(result)


%QUESTION 4

t= 5;
log(2 + t + t.^2)
exp(t) * (1 + cos(3*t))
cos(t).^2 + sin(t).^2
atan(t)
cot(t) = 1/tan(t)
sec(t).^2 + cot(t) - 1

%QUESTION 5

x = [0:0.1:20];
y = sin(x);
plot(x,y)

%QUESTION 6

x = [0 4 2 5];
y = [1 3 0 -2];
plot(x, y, 'o-')

%QUESTION 7

x = [0 1 2 3 4 5 6 7 8 9 10];
x = x + 7;
x = x * 8;
disp(x);

%QUESTION 8

result = ((3^7 * log(76)) / (7^3) - 546) + nthroot(910,3);
disp(result);

%QUESTION 9

result = cos(5*pi/6)^2 * (sin(7*pi/8))^2 + tan(pi/6) * log(8) / 7^(1/2);
disp(result);

%QUESTION 10

A = [1 1 2; 1 4 5; 2 5 2];
A_transpose = A';
disp(A_transpose);

B = [3 2; 1 1];
B_transpose = transpose(B);
disp(B_transpose);


%QUESTION 11 TO 13

A = [5 2 4; 1 7 -3; 6 -10 0];
B = [11 5 -3; 0 -12 4; 2 6 1];
C = [7 14 1; 10 3 -2; 8 -5 9];

a=A + B
b=B + A


c=A + (B + C)
d=(A + B) + C

e=5*(A + C)
f=5*A + 5*C


%QUESTION 14

sum = 0;
for i = 1:9
sum = sum + i;
end
disp(sum)

%QUESTION 15

for i = 1:10000
if mod(i, 37) == 0
disp(i)
end
end

%QUESTION 16

fib = [0, 1];
count = 2;
while count <= 10
    next_fib = fib(end) + fib(end-1);
    if mod(next_fib, 2) == 0
        fib = [fib, next_fib];
        count = count + 1;
    end
    fib = [fib, next_fib];
end
disp(fib)

%QUESTION 17

A = [1 2; 3 4]; % example matrix A
B = [5 6; 7 8]; % example matrix B
C = [9 10; 11 12]; % example matrix C

result1 = A*(B+C);
result2 = A*B + A*C;

disp(result1)
disp(result2)

%QUESTION 18

r = (3*350/(4*pi))^(1/3);
surface_area = 4*pi*r^2;
disp(surface_area)


