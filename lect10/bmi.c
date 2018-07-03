#include <stdio.h>

double calc_bmi(double height, double weight) {
    double height_m = height * 0.01; // 身長[m]
    double bmi = weight / (height_m * height_m);
    return bmi;
}

int main() {
    double height[5] = {140.0, 150.0, 160.0, 170.0, 180.0};
    double weight[5] = {50.0, 60.0, 55.0, 65.0, 60.0};

    int i;
    for (i = 0; i < 5; i++) {
        double bmi = calc_bmi(height[i], weight[i]);
        printf("%d番のBMIは%fです。\n", i, bmi);
    }

    return 0;
}
