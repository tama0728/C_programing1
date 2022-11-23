//
// Created by 김동윤 on 2022/11/23.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[12] = "1234567890";
    char str2[30] = "0987654321";

    strncpy(str2, str1, 5);
    printf("%s\n", str2);

    strcpy(str2, str1);
    printf("%s\n", str2);

    strcat(str2, str1 + '\0');
    printf("%s\n", str2);

    return 0;
}
