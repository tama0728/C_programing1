//
// Created by 김동윤 on 2022/09/14.
//

#include <stdio.h>

int main(void) {
    int x, y, z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("%d", (x-y)*(y+z)*(z%x));

    return 0;
}
