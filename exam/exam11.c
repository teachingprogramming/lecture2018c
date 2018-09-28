#include <stdio.h>

double trimmed_mean(double data[10]) {
    double min = data[0];
    double max = data[0];
    double total = 0;
    int i;
    for (i = 0; i < 10; i++) {
        total += data[i];
        if (data[i] < min) {
            min = data[i];
        } else if (max < data[i]) {
            max = data[i];
        }
    }
    return (total - max - min) / 8.0;
}

int main() {
    double data1[10] = {2.2, 2.1, 5.4, 3.2, 2.9, 6.1, 3.3, 8.2, 7.1, 8.1};
    double tm1 = trimmed_mean(data1);
    printf("data1の最大値と最小値を除いたデータの平均は%lfです。\n", tm1);

    double data2[10] = {3.1, 5.3, 0.1, 7.3, 2.1, 6.5, 3.1, 11.0, 0.9, 13.3};
    double tm2 = trimmed_mean(data2);
    printf("data2の最大値と最小値を除いたデータの平均は%lfです。\n", tm2);

    return 0;
}
