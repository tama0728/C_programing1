//
// Created by 김동윤 on 2022/10/19.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%f\n", pow(a, b));
    printf("%d\n", (int )pow(a, b));

    return 0;
}
