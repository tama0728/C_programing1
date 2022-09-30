//
// Created by 김동윤 on 2022/09/29.
//

#include <stdio.h>

int main(void) {
    int f = 1, n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    if (n == 1) f = 0;
    if (n == 2) f = 1;
    else if (n % 2 == 0) f = 0;
    else{
//        printf("%d / 2 = %d\n", n, n / 2);
        for (int i = 3; i <= n / 2; i += 2) {
//            printf("not i : %d, %d, n : %d\n", i, n % i, n);
            if (n % i == 0) {
                printf("i : %d\n", i);
                f = 0;
                break;
            }
        }
    }
    if (f == 1) printf("It is a prime number.");
    else printf("It is not a prime number.");
    return 0;
}
