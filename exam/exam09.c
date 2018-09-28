#include <stdio.h>

int matrix_type(int matrix[5][5]) {
    int i;
    int j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j && matrix[i][j] == 0) {
                return 2;
            } else if (i != j && matrix[i][j] != 0) {
                return 2;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j && matrix[i][j] != 1) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    char type[][30] = {"単位行列", "対角行列", "対角行列ではない"};
    int a[5][5] = { // 単位行列
            {1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 0, 0, 1}
    };
    int b[5][5] = { // 対角行列
            {1, 0, 0, 0, 0},
            {0, 2, 0, 0, 0},
            {0, 0, 3, 0, 0},
            {0, 0, 0, 4, 0},
            {0, 0, 0, 0, 5}
    };
    int c[5][5] = { // 対角行列ではない　
            {1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 1, 0},
            {1, 0, 0, 0, 1}
    };

    int type_a = matrix_type(a);
    printf("行列aは%s\n", type[type_a]);
    int type_b = matrix_type(b);
    printf("行列bは%s\n", type[type_b]);
    int type_c = matrix_type(c);
    printf("行列cは%s\n", type[type_c]);

    return 0;
}
