//
// Created by 김동윤 on 2022/09/26.
//

#include <stdio.h>

int main(void) {
    int k = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 4; j - i > 0; j--) {
            printf(" ");
        }
        for (int j = 0; j <= k; j++) {
            printf("*");
        }
        printf("\n");
        k += 2;
    }
    return 0;
}
