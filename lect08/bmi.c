#include <stdio.h>

int main() {
    double height;
    printf("身長[cm]は?: ");
    scanf("%lf", &height);

    double weight;
    printf("体重[kg]は?: ");
    scanf("%lf", &weight);

    double height_m = height * 0.01; // 身長[m]
    double bmi = weight / (height_m * height_m);

    printf("BMIは%fです。", bmi);

    return 0;
}
