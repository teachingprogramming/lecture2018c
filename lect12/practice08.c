#include <stdio.h>

void collatz(int n) {
    while (n != 1) {
        printf("%d\n", n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    printf("%d\n", n);

}

int main() {
    collatz(6);
    return 0;
}
