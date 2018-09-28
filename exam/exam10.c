#include <stdio.h>

double harmonic_mean(double data[10]) {
    double denominator = 0;
    int i;
    for (i = 0; i < 10; i++) {
        denominator += 1.0 / data[i];
    }
    return 10 / denominator;
}

int main() {
    double data1[10] = {2.2, 2.1, 5.4, 3.2, 2.9, 6.1, 3.3, 8.2, 7.1, 8.1};
    double hm1 = harmonic_mean(data1);
    printf("data1の調和平均は%lfです。\n", hm1);

    double data2[10] = {3.1, 5.3, 0.1, 7.3, 2.1, 6.5, 3.1, 11.0, 0.9, 13.3};
    double hm2 = harmonic_mean(data2);
    printf("data2の調和平均は%lfです。\n", hm2);

    return 0;
}
