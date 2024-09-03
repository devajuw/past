% Using For Loop Print the given number 5 times %
b = 5;
for k = 1:5
    b
end

% Using For Loop find the output of a number upto exponent 5 %

b=2
for k = 1:5
    b^k
end

% Sum of the numbers from 1 to 9 %
sum = 0;
for k = 1:9
    sum=sum+k;
end

% Write a Program to find sum of odd numbers from 1 to 9 %

sum = 0;
for k = 1:2:9
    sum=sum+k;
end

% Array & For Loop %

b1 = [3 5 6 9 10];
sum=0;
for k = 1 : 4
  sum = sum + b1(k);
end
sum

% Programs using Double Loops %

sum = 0;
for n = 1:2
    for m = 1 : 3
        sum = sum + n*m;
    end
end
sum

% Programs using Double Loop & Printf %

for n = 1:2
    for m = 1:3
        fprintf('n= %d m = %d \n ',n,m)
    end
end

% Verify the number 7 is greater than 5 using if command  %

n = 2;
if (n>5)
    fprintf("%4u is greater than 5 \r",n)
else
    fprintf("%4u is less than 5 \r",n)
end



    















