#include <stdio.h>

int fare(int length, int type) {
    int num; // 超過した回数
    int starting; // 初乗運賃
    int base_length; // 加算となる距離
    int base_fare; // 加算する運賃

    if (type == 0) {
        starting = 690;
        base_length = 301;
        base_fare = 80;
    } else if (type == 1) {
        starting = 700;
        base_length = 249;
        base_fare = 80;
    } else if (type == 2) {
        starting = 800;
        base_length = 227;
        base_fare = 90;
    } else if (type == 3) {
        starting = 840;
        base_length = 219;
        base_fare = 90;
    }

    if (length <= 1500) {
        num = 0;
    } else {
        num = (length - 1500) / base_length + 1;
    }
    return starting + num * base_fare;
}

int main() {
    char type[][20] = {"小型車", "中型車", "大型車", "特定大型車"};
    int t;
    int l;
    for (t = 0; t <= 3; t++) {
        for (l = 1200; l <= 3000; l += 200) {
            int f = fare(l, t);
            printf("静岡で%dmの距離をタクシー（%s）に乗車した時の運賃は%d円です。\n", l, type[t], f);
        }
    }

    return 0;
}
