#include <stdio.h>

int reversi_status(int board[8][8]) {
    int i;
    int j;
    int point = 0;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            point += board[i][j];
        }
    }
    return point;
}

int main() {
    int board[8][8] = {
            {0,  0,  -1, -1, -1, -1, -1, 0},
            {0,  0,  -1, 1,  -1, -1, 0,  1},
            {-1, -1, -1, -1, -1, 1,  1,  1},
            {1,  1,  1,  -1, -1, 1,  1,  1},
            {1,  1,  -1, 1,  -1, 1,  1,  1},
            {-1, -1, 1,  1,  1,  1,  0,  1},
            {-1, -1, 1,  1,  1,  1,  0,  1},
            {0,  0,  1,  1,  1,  1,  1,  0}
    };

    int point = reversi_status(board);
    if (point > 0) {
        printf("黒が%d個多いです。\n", point);
    } else if (point < 0) {
        printf("白が%d個多いです。\n", -point);
    } else {
        printf("同数です。\n");
    }

    return 0;
}
