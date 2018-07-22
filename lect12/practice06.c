#include <stdio.h>

void square(int *a) {
    *a = (*a * *a);
}

int main() {
    int a = 3;
    square(&a);
    printf("%d\n", a);
    return 0;
}
