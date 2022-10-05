//
// Created by 김동윤 on 2022/10/05.
//

#include <stdio.h>

int binary(int n) {
    if (n > 1) binary(n/2);
    printf("%d", n%2);
}

int main(void) {
    int num;
    printf("Pleas enter a number : ");
    scanf("%d",&num);
    binary(num);

    return 0;
}
