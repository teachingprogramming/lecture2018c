#include <stdio.h>

int calc_cost(int a, int b, int c, int g) {
    if (a <= 34 && c <= 25 && b <= 3 && g <= 1000) {
        if (g <= 150) {
            return 180;
        } else if (g <= 250) {
            return 215;
        } else if (g <= 500) {
            return 300;
        } else if (g <= 1000) {
            return 350;
        }
    } else {
        if (g <= 150) {
            return 265;
        } else if (g <= 250) {
            return 305;
        } else if (g <= 500) {
            return 400;
        } else if (g <= 1000) {
            return 450;
        } else if (g <= 2000) {
            return 560;
        } else if (g <= 3000) {
            return 710;
        }
    }
    return -1;
}

int main() {
    int data[4][4] = {
            {20, 2, 15, 100}, // 20cm, 2cm, 15cm, 100g
            {30, 4, 10, 450}, // 30cm, 4cm, 10cm, 450g
            {20, 2, 10, 1500}, // 20cm, 2cm, 10cm, 1500g
            {35, 1, 25, 2500}, // 35cm, 1cm, 25cm, 2500g
    };

    int i;
    for (i = 0; i < 4; i++) {
        int a = data[i][0];
        int b = data[i][1];
        int c = data[i][2];
        int g = data[i][3];
        int cost = calc_cost(a, b, c, g);

        printf("大きさが%dcm×%dcm×%dcm、重さが%dgの荷物は", a, b, c, g);
        if (cost != -1) {
            printf("ゆうメールで送ると%d円です。\n", cost);
        } else {
            printf("ゆうメールでは送ることができません。\n");
        }

    }

    return 0;
}
