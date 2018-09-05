#include <stdio.h>

int f(int n1, int n2) {
    int sum = 0;
    int i;
    for (i = n1; i <= n2; i++) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int n1 = 10;
    int n2 = 20;
    int value = f(n1, n2);
    printf("%dから%dまでの二乗の和は%dです。", n1, n2, value);

    return 0;
}
