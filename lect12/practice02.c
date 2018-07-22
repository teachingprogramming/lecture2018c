#include <stdio.h>

int factorial(int a) {
    int f = 1;
    int i;
    for (i = a; i > 0; i--) {
        f *= i;
    }
    return f;
}

int main() {
    int f = factorial(5);
    printf("%d\n", f);
    return 0;
}
