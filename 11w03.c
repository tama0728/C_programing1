//
// Created by 김동윤 on 2022/11/16.
//

#include <stdio.h>

int main(void) {
    int num = 20;
    const int *ptr = &num;
    num = 40;
    printf("%d", *ptr);

    return 0;
}
