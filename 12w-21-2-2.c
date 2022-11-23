//
// Created by 김동윤 on 2022/11/23.
//

#include <stdio.h>
#include <string.h>


int main(void) {
    char str1[20], str2[20], str3[40];

    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = 0;
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 0;

    strcpy(str3, str1);
    strcat(str3, str2);
    fputs(str3, stdout);
    return 0;
}
