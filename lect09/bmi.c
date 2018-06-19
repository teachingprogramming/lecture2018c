#include <stdio.h>

int main() {
    double height;
    printf("身長[cm]は?: ");
    scanf("%lf", &height);

    double weight;
    printf("体重[kg]は?: ");
    scanf("%lf", &weight);

    double bmi = calc_bmi(height, weight);

    printf("BMIは%fです。", bmi);

    return 0;
}
