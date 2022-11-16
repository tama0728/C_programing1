//
// Created by 김동윤 on 2022/11/16.
//

#include <stdio.h>

void AddArrayElem(int *param, int len, int add){
    for (int i = 0; i < len; ++i) {
        param[i] += add;
    }
}

void ShowArrayElem(int *param, int len){
    for (int i = 0; i < len; ++i) {
        printf("%d ", param[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[3] = {1, 2, 3};
    ShowArrayElem(arr, sizeof(arr)/ sizeof(int));
    AddArrayElem(arr, sizeof(arr)/ sizeof(int), 2);
    ShowArrayElem(arr, sizeof(arr)/ sizeof(int));

    return 0;
}
