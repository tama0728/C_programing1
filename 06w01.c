//
// Created by 김동윤 on 2022/10/12.
//

#include <stdio.h>
int Add(int num1, int num2) {
    return num1 + num2;
}

void Showaddresult(int num) {
    printf("add result : %d \n", num);
}

int ReadNum(void){
    int num;
    scanf("%d", &num);
    return num;
}
void HowToUseThisProg(void){
    printf("Enter two number then add result is shown. \n");
    printf("Please enter two number. \n");
}

int NumberCompare(int num1, int num2);

int main(void) {
    int result, num1, num2;
    HowToUseThisProg();
    num1=ReadNum();
    num2=ReadNum();
    result = Add(num1, num2);
    Showaddresult(result);
    printf("%d\n", NumberCompare(3, 4));
    printf("%d\n", NumberCompare(7, 4));
    return 0;
}

int NumberCompare(int num1, int num2){
    if (num1>num2) return num1;
    else return num2;
}
