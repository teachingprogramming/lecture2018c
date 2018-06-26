#include <stdio.h>

double calc_bmi(double height, double weight) {
    double height_m = height * 0.01; // 身長[m]
    double bmi = weight / (height_m * height_m);
    return bmi;
}

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
