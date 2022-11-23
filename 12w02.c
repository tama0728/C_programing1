//
// Created by 김동윤 on 2022/11/23.
//

#include <stdio.h>

int main(void) {
    int ch;

    while (1) {
        ch = getchar();
        if (ch == EOF)
            break;
        putchar(ch);
    }
    return 0;
}
