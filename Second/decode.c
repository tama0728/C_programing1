//
// Created by 김동윤 on 2022/11/16.
//

#include <stdio.h>

void decode(const char* str, int length, const char* encodingTable, char* newStr){
    for (int i = 0; i < length; ++i) {
        char word = str[i];
        if (word >= 97 && word <= 122){
            for (int j = 0; j < 26; ++j) {
                if (word == encodingTable[j]) {
                    newStr[i] = (char)(j + 97);
                    break;
                }
            }
        } else if (word >= 48 && word <= 57) {
            newStr[i] = (char)((word - 40) % 10 + 48);
        }else newStr[i] = word;
    }
    printf("이를 다시 복호화한 결과, 패스워드는 %s입니다. \n", newStr);
}
