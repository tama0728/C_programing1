//
// Created by 김동윤 on 2022/11/09.
//

#include <stdio.h>

int main(void) {
    int *ptr1 = 0x0010;
    double *ptr2 = 0x0100;

    printf("%p %p \n", ptr1, ptr2);
    printf("%p %p \n", ptr1 + 1, ptr2 + 1);
    printf("%p %p \n", ptr1 + 2, ptr2 + 2);
    ptr1++;
    ptr2++;
    printf("%p %p \n", ptr1, ptr2);
    ptr1++;
    ptr2++;
    printf("%p %p \n", ptr1, ptr2);
    ptr1++;
    ptr2++;
    printf("%p %p \n", ptr1, ptr2);

    return 0;
}
