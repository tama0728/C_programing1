//
// Created by 김동윤 on 2022/11/16.
//

#include <stdio.h>

void encode(const char* str, int length, const char * encodingTable, char* newStr) {
    for (int i = 0; i < length; ++i) {
        char word = str[i];
        if (word >= 97 && word <= 122){
            newStr[i] = encodingTable[word-97];
        } else if (word >= 48 && word <= 57) {
            newStr[i] = (char)((word - 46) % 10 + 48);
        }else newStr[i] = word;
    }
    printf("입력하신 패스워드가 %s로 암호화 되었습니다. \n", newStr);
}
