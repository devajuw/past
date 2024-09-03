// Assignment18.c
#include <stdio.h>
#include <math.h>

double f(double x) {
    return 1 / (sqrt(1 - x*x) * (1 - 0.75*x*x));
}

double simpsonsRule(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double result = f(a) + f(b);
    for (int i = 1; i < n; i++) {
        result += (i % 2 == 1 ? 4 : 2) * f(a + i*h);
    }
    result *= h/3.0;
    return result;
}

int main() {
    int n = 30;
    double integral = simpsonsRule(f, 0, 0.5, n);
    printf("Approximate value of integral: %lf\n", integral);
    return 0;
}
