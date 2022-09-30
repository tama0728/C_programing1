//
// Created by 김동윤 on 2022/09/29.
//

#include <stdio.h>

int main(void) {
    int r = 0, g = 0, b = 0, k = 1, w;
    unsigned int hex;
    char channel, y;
    printf("16진수 컬러 코드값을 입력하세요: ");
//    scanf("0x%2x%2x%2x", &r, &g, &b);
    scanf("%x", &hex);
    r = (hex & 0x00ff0000) >> 16;
    g = (hex & 0x0000ff00) >> 8;
    b = (hex & 0x000000ff);
    printf("입력된 컬러의 R,G,B 값은 (%d, %d, %d)입니다.\n\n", r, g ,b);
    do {
        do {
            k = 1;
            printf("RGB 중 변경할 컬러 채널을 입력하세요:");
            scanf(" %c", &channel);
            if (channel == 'R' || channel == 'r' ||
                channel == 'G' || channel == 'g' ||
                channel == 'B' || channel == 'b') {
                k = 0;
            } else { printf("잘못 입력하셨습니다. 다시 입력하세요.\n"); }
        } while (k == 1);
        if (channel >= 'a' && channel <= 'z'){
            channel = (char)((int)channel - 32);
        }
        printf("%c 채널의 증감 정도를 입력하세요:", channel);
        scanf("%d", &w);
        if (channel == 'r' || channel == 'R') {
            r += w;
            if (r > 255) { r = 255; }
            else if (r < 0) { r = 0; }
        } else if (channel == 'g' || channel == 'G') {
            g += w;
            if (g > 255) { g = 255; }
            else if (g < 0) { g = 0; }
        } else if (channel == 'b' || channel == 'B') {
            b += w;
            if (b > 255) { b = 255; }
            else if (b < 0) { b = 0; }
        }
//        printf("\n조정된 컬러의 R,G,B 값은 (%d, %d, %d)이고, 이는 0x%02X%02X%02X로 저장됩니다.\n", r, g, b, r, g, b);
//        hex = (r << 16) + (g << 8) + b;
        hex = (r << 16) | (g << 8) | b;
        printf("\n조정된 컬러의 R,G,B 값은 (%d, %d, %d)이고, 이는 0x%06X로 저장됩니다.\n", r, g, b, hex);
        printf("계속 컬러를 조정하시겠습니까? (y/n) ");
        scanf(" %c", &y);
        printf("\n");
    } while (y == 'Y' || y == 'y');
    return 0;
}
