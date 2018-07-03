#include <stdio.h>

void print_state(int s[3][3]) {
    int i;
    int j;
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            if (s[j][i] > 0) {
                printf("O");
            } else if (s[j][i] < 0) {
                printf("X");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}

int check_state(int s[3][3]) {
    if ((s[0][0] > 0 && s[0][1] > 0 && s[0][2] > 0) ||
        (s[1][0] > 0 && s[1][1] > 0 && s[1][2] > 0) ||
        (s[2][0] > 0 && s[2][1] > 0 && s[2][2] > 0) ||
        (s[0][0] > 0 && s[1][0] > 0 && s[2][0] > 0) ||
        (s[0][1] > 0 && s[1][1] > 0 && s[2][1] > 0) ||
        (s[0][2] > 0 && s[1][2] > 0 && s[2][2] > 0) ||
        (s[0][0] > 0 && s[1][1] > 0 && s[2][2] > 0) ||
        (s[0][2] > 0 && s[1][1] > 0 && s[2][0] > 0)) {
        return 1;
    } else if ((s[0][0] < 0 && s[0][1] < 0 && s[0][2] < 0) ||
               (s[1][0] < 0 && s[1][1] < 0 && s[1][2] < 0) ||
               (s[2][0] < 0 && s[2][1] < 0 && s[2][2] < 0) ||
               (s[0][0] < 0 && s[1][0] < 0 && s[2][0] < 0) ||
               (s[0][1] < 0 && s[1][1] < 0 && s[2][1] < 0) ||
               (s[0][2] < 0 && s[1][2] < 0 && s[2][2] < 0) ||
               (s[0][0] < 0 && s[1][1] < 0 && s[2][2] < 0) ||
               (s[0][2] < 0 && s[1][1] < 0 && s[2][0] < 0)) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int state[3][3] = {0};

    for (int i = 0; i < 9; i++) {
        print_state(state);

        printf("\n");

        if (i % 2 == 0) {
            printf("先手\n");
        } else {
            printf("後手\n");
        }
        int x;
        int y;
        printf("x座標: ");
        scanf("%d", &x);
        printf("y座標: ");
        scanf("%d", &y);


        if (i % 2 == 0) {
            state[y][x] = 1;
        } else {
            state[y][x] = -1;
        }

        int result = check_state(state);

        if (result > 0) {
            printf("\n");
            printf("先手の勝ち\n");
            print_state(state);
            break;
        } else if (result < 0) {
            printf("\n");
            printf("後手の勝ち\n");
            print_state(state);
            break;
        }
        printf("\n");
    }

}
