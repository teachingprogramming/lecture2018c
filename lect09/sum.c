#include <stdio.h>

int calc_sum(int start, int end) {
    int sum = 0;
    int i;
    for (i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int start = 10;
    int end = 40; // endはstartより大きな数とする
    int sum = calc_sum(start, end);
    printf("%dから%dまでの数の合計は%dです。", start, end, sum);

    return 0;
}
