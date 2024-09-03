// Assignment19.c
#include <stdio.h>
#include <math.h>

double f(double x) {
    return 1 / (x*x - 2*x + 3);
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

double trapezoidalRule(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double result = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; i++) {
        result += f(a + i*h);
    }
    result *= h;
    return result;
}

int main() 
{
    int n = 18;
    double integralSimpson = simpsonsRule(f, 0, 1, n);
    double integralTrapezoid = trapezoidalRule(f, 0, 1, n);
    printf("Approximate value using Simpson's rule: %lf\n", integralSimpson);
    printf("Approximate value using Trapezoidal rule: %lf\n", integralTrapezoid);
    printf("Percentage Error: %lf%%\n", 100.0 * fabs(integralSimpson - integralTrapezoid) / integralSimpson);
    return 0;
}
