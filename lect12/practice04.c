#include <stdio.h>

int sum(int a[2][3]) {
    int i, j;
    int s = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            s += a[i][j];
        }
    }
    return s;
}

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int s = sum(a);
    printf("%d\n", s);
    return 0;
}
