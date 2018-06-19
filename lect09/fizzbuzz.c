#include <stdio.h>

int main(void) {
    int fizz = 5;
    int buzz = 9;
    int start = 400;
    int end = 500;
    printf("%dの倍数のときFizz、%dの倍数のときBuzzを表示するFizzBuzzを%d以上%d未満で実行する\n", fizz, buzz, start, end);
    fizzbuzz(fizz, buzz, start, end);
}
