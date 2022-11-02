//
// Created by 김동윤 on 2022/11/02.
//

#include <stdio.h>

int main(void) {
    char str[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
    for (int i = 0; i < sizeof(str) / sizeof(char); ++i) {
        printf("%c", str[i]);
    }
    return 0;
}
