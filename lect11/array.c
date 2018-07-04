#include <stdio.h>

void triple(int b[3]) {
    printf("b: %d, %d, %d\n", b[0], b[1], b[2]);
    printf("bの先頭アドレスは%p\n", b);
    int i;
    for (i = 0; i<3; i++) {
        b[i] *= 3;
    }
    printf("b: %d, %d, %d\n", b[0], b[1], b[2]);
    printf("bの先頭アドレスは%p\n", b);
}


int main() {
    int a[3] = {1, 2, 3};

    printf("a: %d, %d, %d\n", a[0], a[1], a[2]);
    printf("aの先頭アドレスは%p\n", a);

    triple(a);

    printf("a: %d, %d, %d\n", a[0], a[1], a[2]);
    printf("aの先頭アドレスは%p\n", a);

    return 0;
}

