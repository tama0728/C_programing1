//
// Created by 김동윤 on 2022/11/02.
//

#include <stdio.h>

int main(void) {
    int multi[3][9];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 9; ++j) {
            multi[i][j] = (i + 2) * (j + 1);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 9; ++j) {
            printf("%2d ", multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
