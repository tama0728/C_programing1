//
// Created by 김동윤 on 2022/11/23.
//

#include <stdio.h>

int main(void) {
    int c = getchar();
    if (c >= 65 && c <= 90)
        putchar(c += 32);
    else if (c >= 97 && c <= 122)
        putchar(c - 32);
    else
        printf("범위를 벗어난 입력입니다.");

    return 0;
}
