#include <stdio.h>

int det(int d[2][2]) {
    return d[0][0] * d[1][1] - d[0][1] * d[1][0];
}

int main() {
    int a[2][2] = {
            {3, 2},
            {4, 1}
    };

    int v = det(a);
    printf("行列式の値は%dです。", v);

    return 0;
}
