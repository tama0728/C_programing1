//
// Created by 김동윤 on 2022/11/09.
//

#include <stdio.h>

int main(void) {
    int arr1[] = {1, 2, 3};
    double arr2[] = {1.1, 2.2, 3.3};
    int *t = arr1 + 1;

    printf("1 %d %g \n", *arr1, *arr2);

    *arr1 += 100;
    *arr2 += 120.5;

    printf("2 %d %g \n", arr1[0], arr2[0]);
    printf("3 %d %g \n", arr1[1], arr2[1]);
    *t += 25;
    printf("4 %d %g \n", arr1[1], arr2[1]);

    return 0;
}
