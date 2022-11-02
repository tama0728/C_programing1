//
// Created by 김동윤 on 2022/11/02.
//

#include <stdio.h>

int main(void) {
    char str[50], temp;
    int i = 0;
    printf("영단어 입력");
    scanf("%s", str);
    while (str[i] != '\0') i++;
    for (int j = 0; j < i / 2; ++j) {
        temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
    printf("뒤집혀진 영단어: %s\n", str);

    return 0;
}
