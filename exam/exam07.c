#include <stdio.h>

int fare(int length) {
    int num; // 超過した回数
    if (length <= 1500) {
        num = 0;
    } else {
        num = (length - 1500) / 301 + 1;
    }
    return 690 + num * 80;
}

int main() {
    int l;
    for (l = 1200; l <= 3000; l += 200) {
        int f = fare(l);
        printf("静岡で%dmの距離をタクシー（小型車）に乗車した時の運賃は%d円です。\n", l, f);
    }

    return 0;
}
