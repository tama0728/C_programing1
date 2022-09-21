//
// Created by 김동윤 on 2022/09/21.
//

#include <stdio.h>

int main(void) {
    float kilo;
    printf("please enter kilometers: ");
    scanf("%f", &kilo);
    printf("%.1f km is equal to %.1f miles", kilo, kilo/1.609);

    return 0;
}
