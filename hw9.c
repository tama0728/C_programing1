//
// Created by 김동윤 on 2022/11/23.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    char str[30];
    int temp = 0;
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); ++i) {
        temp = (int)(str[i]);
        if (temp >= 'a' && temp <= 'z') {
            str[i] -= 32;
        } else if (temp >= 'A' && temp <= 'Z')
            str[i] += 32;
    }
    fputs(str, stdout);

    return 0;
}
