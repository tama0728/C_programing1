//
// Created by 김동윤 on 2022/11/09.
//

#include <stdio.h>

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *start = arr;
    int *end = &arr[5];
    int temp = 0;


    for (int i = 0; i < 3; ++i) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    for (int i = 0; i < 6; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
