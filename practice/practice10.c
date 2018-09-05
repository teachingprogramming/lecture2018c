#include <stdio.h>

int gengou(int year) {
    if (year <= 1912) {
        return 0;
    } else if (year <= 1926) {
        return 1;
    } else if (year <= 1989) {
        return 2;
    }
    return 3;
}

int main() {
    int year;
    for (year = 1875; year <= 2000; year += 25) {
        printf("西暦%d年1月1日の元号は", year);
        int g = gengou(year);
        if (g == 0) {
            printf("明治です。\n");
        } else if (g == 1) {
            printf("大正です。\n");
        } else if (g == 2) {
            printf("昭和です。\n");
        } else if (g == 3) {
            printf("平成です。\n");
        }
    }
    return 0;
}
