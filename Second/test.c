//
// Created by 김동윤 on 2022/11/16.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[30];
    char newStr[30];
    char *encodingTable = "wyhfxumtjvsgenbrdzlqapcoki";
    scanf(" %s", str);
    int length = strlen(str);

    for (int i = 0; i < length; ++i) {
        char word = str[i];
        if (word >= 97 && word <= 122){
            newStr[i] = strchr(encodingTable, word) - encodingTable + 97;
        } else if (word >= 48 && word <= 57) {
            newStr[i] = (((int) word - 40) % 10) + 48;
        }else newStr[i] = word;
    }
    printf("입력하신 패스워드가 %s로 암호화 되었습니다.", newStr);

    return 0;
}
