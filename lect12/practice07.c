#include <stdio.h>

int janken(int a, int b) {
    if (a == 0) {
        if (b == 1) {
            return 1;
        } else if (b == 2) {
            return -1;
        }
    } else if (a == 1) {
        if (b == 0) {
            return -1;
        } else if (b == 2) {
            return 1;
        }
    } else if (a == 2) {
        if (b == 0) {
            return 1;
        } else if (b == 1) {
            return -1;
        }
    }
    return 0;
}

int main() {
    int a = 0; // Aはグー
    int b = 1; // Bはチョキ
    int result = janken(a, b);
    if (result == 1) {
        printf("Aの勝ち");
    } else if (result == 0) {
        printf("引き分け");
    } else if (result == -1) {
        printf("Aの負け");
    }
    return 0;
}
