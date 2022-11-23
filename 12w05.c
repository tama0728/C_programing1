//
// Created by 김동윤 on 2022/11/23.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[30];
    char str2[30];
    scanf("%s", str1);
    scanf("%s", str2);
    int c = strcmp(str1, str2);
    printf("%d", c);
    if (!c){
        puts("동일");

    return 0;
}
