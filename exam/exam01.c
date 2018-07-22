#include <stdio.h>

int cost(int a, int b, int c) {
    int size = a + b + c;
    if (size <= 60) {
        return 800;
    } else if (size <= 80) {
        return 1010;
    } else if (size <= 100) {
        return 1260;
    } else if (size <= 120) {
        return 1500;
    } else if (size <= 140) {
        return 1750;
    } else if (size <= 160) {
        return 1970;
    } else if (size <= 170) {
        return 2300;
    }
    return -1;
}

int main() {
    int c1 = cost(30, 40, 50);
    if (c1 != -1) {
        printf("c1の送料は%d円です。\n", c1);
    } else {
        printf("c1はゆうパックでは送ることができません。");
    }

    int c2 = cost(50, 60, 70);
    if (c2 != -1) {
        printf("c2の送料は%d円です。\n", c2);
    } else {
        printf("c2はゆうパックでは送ることができません。");
    }

    return 0;
}
