//
// Created by 김동윤 on 2022/11/16.
//

#include <stdio.h>
int SquareByValue(int num){
    return num * num;
}

void SquareByPointer(int *num){
    *num *= *num;
}

int main(void) {
    int n = 5;
    printf("n : %d \n", n);
    printf("%d \n",SquareByValue(n));
    SquareByPointer(&n);
    printf("n : %d \n", n);
    return 0;
}
