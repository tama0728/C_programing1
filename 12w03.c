//
// Created by 김동윤 on 2022/11/23.
//

#include <stdio.h>

int main(void) {
    char str[7];

    for (int i = 0; i < 3; ++i) {
        fgets(str, sizeof (str), stdin);
        printf("Read %d : %s \n", i+1, str);
    }
    return 0;
}
