//
// Created by 김동윤 on 2022/11/16.
//

#include <stdio.h>
#include <string.h>

int checkCondition(const char* str, int length) {
    if (length >= 8 && length <= 12){
        int numberCheck = 0;
        int englishCheck = 0;
        int specialCheck = 0;
        for (int i = 0; i < length; ++i) {
            char check = str[i];
            if (check >= 48 && check <= 57) numberCheck = 1;
            else if ((check >= 65 && check <= 89) || (check >= 97 && check <= 122)) englishCheck = 1;
            else specialCheck = 1;
        }
        if (!numberCheck || !englishCheck || !specialCheck){
            printf("숫자와 알파벳을 혼합해 주세요:");
            return 0;
        } else return 1;
    } else {
        printf("범위 내의 문자 수로 다시 입력하세요:");
        return 0;
    }
}

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

int main(void) {
    char pw[12] = {0};
    char *encodingTable = "wyhfxumtjvsgenbrdzlqapcoki";
    char *encoded[12] = {0};
    char *decoded[12] = {0};
    int len = 0;

    printf("패스워드를 입력하세요 (숫자와 알파벳을 혼합하여 8-12자):");
    do {
        scanf(" %s", pw);
        len = strlen(pw);
    } while (!checkCondition(pw, len));

    encode(pw, len, encodingTable, (char *) encoded);
    decode((const char *) encoded, len, encodingTable, (char *) decoded);
    return 0;
}
