//
// Created by 김동윤 on 2022/09/29.
//

#include <stdio.h>

int main(void) {
    int r = 0, g = 0, b = 0, k = 1, w;
    unsigned int hex, result;
    char channel, y;
    printf("16진수 컬러 코드값을 입력하세요: ");
    scanf("%x", &hex);
    printf("%06x\n", hex);
    r = (hex & 0x00ff0000) >> 16;
    g = (hex & 0x0000ff00) >> 8;
    b = (hex & 0x000000ff);

    printf("r : %d, g : %d, b : %d\n", r, g, b);

    printf("weight : ");
    scanf("%d", &w);
    r += w;
    result = (r << 16) + (g << 8) + b;

    printf("%06X\n", result);
    return 0;
}
