#include <stdio.h>

void average(double *a, double *b, double *c) {
    double ave = (*a + *b + *c) / 3;
    *a = ave;
    *b = ave;
    *c = ave;
}

int main() {
    double a = 33.7;
    double b = 84.2;
    double c = 11.9;

    printf("a: %lf, b: %lf, c: %lf\n", a, b, c);

    average(&a, &b, &c);

    printf("a: %lf, b: %lf, c: %lf\n", a, b, c);

    return 0;
}
