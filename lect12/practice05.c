#include <stdio.h>

int max(int a[5]) {
    int m = a[0];
    int i;
    for (i = 1; i < 5; i++) {
        if (m < a[i]) {
            m = a[i];
        }
    }
    return m;
}

int main() {
    int a[5] = {0, 4, 20, -20, 8};
    int m = max(a);
    printf("%d\n", m);
    return 0;
}
