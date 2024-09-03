// Assignment20.c
#include <stdio.h>

double f(double x) {
    return 1 / ((x - 1)*x*x - 2*x);
}

double simpsonsThreeEightsRule(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double result = f(a) + f(b);
    for (int i = 1; i < n; i++) {
        result += (i % 3 == 0 ? 2 : 3) * f(a + i*h);
    }
    result *= 3*h/8.0;
    return result;
}

int main() {
    int n = 24;  // Chose 24 because it's divisible by 3
    double integral = simpsonsThreeEightsRule(f, 0, 1, n);
    printf("Approximate value of integral: %lf\n", integral);
    return 0;
}
