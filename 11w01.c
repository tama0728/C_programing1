//
// Created by 김동윤 on 2022/11/16.
//

#include <stdio.h>

int main(void) {
    char str1[] = "My String";
    char *str2 = "Your String";
    printf("%s \n%s \n", str1, str2);

    str2 = "Our String";
    printf("%s \n%s \n", str1, str2);

    str1[0] = 'X';
//    str2[0] = 'X';  // Error
    printf("%s \n%s \n", str1, str2);

    return 0;
}
