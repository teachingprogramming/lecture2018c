#include <stdio.h>

int days(int year) {
    int d;
    if (year % 900 == 200 || year % 900 == 600) {
        d = 366;
    } else if (year % 100 == 0) {
        d = 365;
    } else if (year % 4 == 0) {
        d = 366;
    } else {
        d = 365;
    }
    return d;
}


int main() {
    int years[8] = {1900, 2000, 2015, 2016, 2017, 2018, 2800, 2900};
    int i;
    for (i = 0; i < 8; i++) {
        int year = years[i];
        printf("西暦%d年は", year);
        int d = days(year);
        if (d == 366) {
            printf("閏年です。\n");
        } else {
            printf("平年です。\n");
        }
    }

    return 0;
}
