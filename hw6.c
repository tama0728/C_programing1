//
// Created by 김동윤 on 2022/11/02.
//

#include <stdio.h>

int main(void) {
    int temp, e = 0, o = 0, odd[5], even[5];
    printf("Please input five integers: ");
    for (int i = 0; i < 5; ++i) {
        scanf(" %d", &temp);
        if (temp % 2 == 0) {
            even[e] = temp;
            e++;
        } else{
            odd[o] = temp;
            o++;
        }
    }
    printf("Odd numbers: ");
    for (int i = 0; i < o; ++i) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    printf("Even numbers: ");
    for (int i = 0; i < e; ++i) {
        printf("%d ", even[i]);
    }
    printf("\n");
    return 0;
}
