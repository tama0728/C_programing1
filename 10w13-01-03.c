//
// Created by 김동윤 on 2022/11/09.
//

#include <stdio.h>

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[4];

    for (int i = 0; i < 5; ++i) {
        *ptr += 2;
        ptr--;
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
