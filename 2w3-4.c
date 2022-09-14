//
// Created by 김동윤 on 2022/09/14.
//

#include <stdio.h>

int main(void) {
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("몫 : %d\n나머지 : %d", x/y, x%y);

    return 0;
}
