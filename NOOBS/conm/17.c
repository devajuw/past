// Assignment17.c
#include <stdio.h>
#include <math.h>

double f1(double x) {
    return 11 + 4*x + 5*x*x;
}

double f2(double x) {
    return 0.5 - 0.75*x*x / (1 - x*x);
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
\
int main()
{
    int n = 20; 
    double integral1 = trapezoidalRule(f1, 0, 1, n);
    double integral2 = trapezoidalRule(f2, 0, 0.5, n);
    printf("Approximate value of first integral: %lf\n", integral1);
    printf("Approximate value of second integral: %lf\n", integral2);
    return 0;
}
