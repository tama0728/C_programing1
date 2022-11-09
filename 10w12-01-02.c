//
// Created by 김동윤 on 2022/11/09.
//

#include <stdio.h>

int main(void) {
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;

    (*ptr1) += 10;
    (*ptr2) -= 10;

    printf("%d, %d \n", *ptr1, *ptr2);

    int *temp = 0;
    temp = ptr2;
    ptr2 = ptr1;
    ptr1 = temp;

    printf("%d, %d \n", *ptr1, *ptr2);

    return 0;
}
