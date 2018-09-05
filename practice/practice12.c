#include <stdio.h>

int range(int data[10]) {
    int min = data[0];
    int max = data[0];
    int i;
    for (i = 1; i < 10; i++) {
        if (data[i] < min) {
            min = data[i];
        } else if (max < data[i]) {
            max = data[i];
        }
    }
    return max - min;
}

int main() {
    int data1[10] = {2, 2, 5, 3, 2, 6, 3, 8, 7, 8};
    int r1 = range(data1);
    printf("data1の範囲（レンジ）は%dです。\n", r1);

    int data2[10] = {3, 5, 0, -7, 2, -6, -3, 11, 1, 13};
    int r2 = range(data2);
    printf("data2の範囲（レンジ）は%dです。\n", r2);

    return 0;
}
