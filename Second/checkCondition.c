//
// Created by 김동윤 on 2022/11/16.
//

#include <stdio.h>

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
