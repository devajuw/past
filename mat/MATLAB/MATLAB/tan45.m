x = linspace(-2pi, 2pi, 100);
y = tan(x.*(pi/180));
plot(x, y);
xlabel('x');
ylabel('tan(x)');