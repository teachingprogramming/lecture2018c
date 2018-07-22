#include <stdio.h>

double asset_management(double principal, double rate, int year) {
    int i;
    double result = principal;
    for (i = 0; i < year; i++) {
        result += result * (rate * 0.01);
    }
    return result;
}

int main() {
    double principal1 = 1000000;
    double rate1 = 2.5;
    int years1 = 10;
    double result1 = asset_management(principal1, rate1, years1);
    printf("元本%.0lf円を年利%.2lf%%で%d年運用すると%.0lf円になります。\n", principal1, rate1, years1, result1);

    double principal2 = 500000;
    double rate2 = 10.0;
    int years2 = 15;
    double result2 = asset_management(principal2, rate2, years2);
    printf("元本%.0lf円を年利%.2lf%%で%d年運用すると%.0lf円になります。\n", principal2, rate2, years2, result2);

    return 0;
}
