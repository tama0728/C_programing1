//
// Created by 김동윤 on 2022/11/16.
//
#include <stdio.h>
#include <math.h>

double StandardDeviation(int *arr, int len){
    double sum = 0;
    double avg;
    for (int i = 0; i < len; ++i) {
        sum += arr[i];
    }
    avg = sum / len;
    sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += pow((arr[i] - avg), 2);
    }
    avg = sum / len;

    return sqrt(avg);
}

int main(void) {
    int arr[5];
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; ++i) {
        scanf(" %d", &arr[i]);
    }

    float sd = StandardDeviation(arr, sizeof(arr)/ sizeof(int));
    printf("Standard Deviation = %.3lf", sd);
    return 0;
}
