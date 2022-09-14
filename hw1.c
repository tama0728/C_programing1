//
// Created by 김동윤 on 2022/09/14.
//

#include <stdio.h>

int main(void) {
    int a, b;
    printf("Input two integers:");
    scanf("%d %d", &a, &b);

    printf("%d & %d = %d\n", a, b, a & b);
    printf("%d | %d = %d\n", a, b, a | b);
    printf("%d ^ %d = %d\n", a, b, a ^ b);
    return 0;
}