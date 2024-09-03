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
