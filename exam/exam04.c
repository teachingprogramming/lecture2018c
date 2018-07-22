#include <stdio.h>

int tally(int votes[10]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int i;
    for (i = 0; i < 10; i++) {
        if (votes[i] == 1) {
            a++;
        } else if (votes[i] == 2) {
            b++;
        } else if (votes[i] == 3) {
            c++;
        }
    }
    if (a > b && a > c) {
        return 1;
    } else if (b > a && b > c) {
        return 2;
    } else if (c > a && c > b) {
        return 3;
    }
    return -1;
}

int main() {
    // 普通の結果
    int votes1[10] = {1, 2, 1, 3, 2, 0, 3, 2, 2, 3};
    int winner1 = tally(votes1);
    if (winner1 == -1) {
        printf("当選者は決まりませんでした。\n");
    } else {
        printf("%d番の候補者が当選しました。\n", winner1);
    }

    // 同じ票数の場合
    int votes2[10] = {1, 1, 1, 2, 2, 2, 3, 3, 0, 4};
    int winner2 = tally(votes2);
    if (winner2 == -1) {
        printf("当選者は決まりませんでした。\n");
    } else {
        printf("%d番の候補者が当選しました。\n", winner2);
    }

    return 0;
}
