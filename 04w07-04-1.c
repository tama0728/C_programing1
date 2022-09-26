//
// Created by 김동윤 on 2022/09/26.
//

#include <stdio.h>

int main(void) {
    int a, b, sum = 0;
    printf("please input first integer : ");
    scanf("%d", &a);
    do {
        printf("please input second integer (second integer must be lager than first one) : ");
        scanf("%d", &b);
    } while (b <= a);

    for (int i = a; i <= b; ++i) {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}
