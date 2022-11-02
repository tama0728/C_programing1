//
// Created by 김동윤 on 2022/11/02.
//

#include <stdio.h>

int main(void) {
    char str[50], max;
    int i = 0;
    scanf("%s", str);
    max = str[0];
    while (str[i] != '\0') {
        i++;
        if (max < str[i]) max = str[i];
    }
    printf("%c", max);
    return 0;
}
