//
// Created by 김동윤 on 2022/11/02.
//

#include <stdio.h>

int main(void) {
    int arr[5], max, min, sum = 0;

    for (int i = 0; i < 5; ++i) {
        scanf(" %d", &arr[i]);
    }
    max = arr[0];
    min = arr[1];
    for (int i = 0; i < 5; ++i) {
        sum += arr[i];
        if (max < arr[i]) max = arr[i];
        if (min > arr[i]) min = arr[i];
    }
    printf("sum : %d\nmax : %d\nmin : %d\n", sum, max, min);

    return 0;
}
