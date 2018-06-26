#include <stdio.h>

void fizzbuzz(int fizz, int buzz, int start, int end) {
    int i;
    for (i = start; i < end; i++) {
        if (i % fizz == 0 && i % buzz == 0) {
            printf("FizzBuzz ");
        } else if (i % fizz == 0) {
            printf("Fizz ");
        } else if (i % buzz == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
}

int main(void) {
    int fizz = 5;
    int buzz = 9;
    int start = 400;
    int end = 500;
    printf("%dの倍数のときFizz、%dの倍数のときBuzzを表示するFizzBuzzを%d以上%d未満で実行する\n", fizz, buzz, start, end);
    fizzbuzz(fizz, buzz, start, end);
}
