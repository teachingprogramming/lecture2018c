#include <stdio.h>

int func(int d) {
    printf("dの値は%d\n", d);
    printf("dのアドレスは%p\n", &d);
}

int main() {
    int a;
    int b;
    int *c;

    a = 1;
    b = a;
    c = &a;
    printf("aの値は%d、bの値は%d、*cの値は%d\n", a, b, *c);
    printf("aのアドレスは%p、bのアドレスは%p,*cのアドレスは%p\n", &a, &b, c);
    func(a);

    a = 2;
    printf("aの値は%d、bの値は%d、*cの値は%d\n", a, b, *c);
    printf("aのアドレスは%p、bのアドレスは%p,*cのアドレスは%p\n", &a, &b, c);
    func(a);

    return 0;
}

