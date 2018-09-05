#include <stdio.h>

void sort(double *a, double *b, double *c) {
    double x = *a;
    double y = *b;
    double z = *c;
    if (x < y && x < z) {
        if (y < z) {
            *a = x;
            *b = y;
            *c = z;
        } else {
            *a = x;
            *b = z;
            *c = y;
        }
    } else if (y < x && y < z) {
        if (x < z) {
            *a = y;
            *b = x;
            *c = z;
        } else {
            *a = y;
            *b = z;
            *c = x;
        }
    } else { // (z < x && z < x)が真
        if (x < y) {
            *a = z;
            *b = x;
            *c = y;
        } else {
            *a = z;
            *b = y;
            *c = x;
        }
    }
}

int main() {
    double a = 33.7;
    double b = 84.2;
    double c = 11.9;

    printf("a: %lf, b: %lf, c: %lf\n", a, b, c);

    sort(&a, &b, &c);

    printf("a: %lf, b: %lf, c: %lf\n", a, b, c);

    return 0;
}
