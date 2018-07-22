#include <stdio.h>

int sum(int a, int b) {
    int s = 0;
    int i;
    for (i = a; i <= b; i++) {
        s += i;
    }
    return s;
}

int main() {
    int s = sum(10, 30);
    printf("%d\n", s);
    return 0;
}
