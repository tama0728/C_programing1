//
// Created by 김동윤 on 2022/11/23.
//

#include <stdio.h>

int main(void) {
    int ch1, ch2;

    ch1 = getchar();
    ch2 = fgetc(stdin);

    putchar(ch1);
    printf("=====");
    fputc(ch2, stdout);
    printf("=====");

    return 0;
}
