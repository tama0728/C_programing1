//
// Created by 김동윤 on 2022/11/09.
//

#include <stdio.h>

int main(void) {
    int num1 = 100, num2 = 100;
    int *pnum;
    pnum = &num1;
    int *pnum2 = pnum;
    printf("%p\n", &num1);
    printf("%p\n", pnum);
    printf("%p\n", pnum2);
    (*pnum) += 30;

    pnum = &num2;
    (*pnum) -= 30;

    printf("num1 : %d, num2 : %d", num1, num2);
    return 0;
}
