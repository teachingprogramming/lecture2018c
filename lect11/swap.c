#include <stdio.h>

void swap(int x, int y) {
    printf("xは%d、yは%d\n", x, y);
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    printf("xは%d、yは%d\n", x, y);
}

int main() {
    int a = 1;
    int b = 2;
    printf("aは%d、bは%d\n", a, b);
    swap(a, b);
    printf("aは%d、bは%d\n", a, b);

    return 0;
}
