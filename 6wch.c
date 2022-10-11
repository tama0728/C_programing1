//
// Created by 김동윤 on 2022/10/05.
//

#include <stdio.h>

int square(int n) {
if (n == 1) {
        return 2;
    } else {
        return square(n-1) * 2;
    }
}


int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d", square(num));
    return 0;
}
