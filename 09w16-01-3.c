//
// Created by 김동윤 on 2022/11/02.
//

#include <stdio.h>

int main(void) {
    int score[5][5], sum, temp;
    char* name[] = {"철희", "철수", "영희", "영수", "총점"};
    char* sub[] = {"국어", "영어", "수학", "국사", "총점"};

    for (int i = 0; i < 4; ++i) {
        sum = 0;
        for (int j = 0; j < 4; ++j) {
            printf("%s의 %s점수를 입력하시오. : ", name[i], sub[j]);
            scanf(" %d", &temp);
            score[i][j] = temp;
            sum += temp;
        }
        score[i][4] = sum;
    }

    for (int i = 0; i < 5; ++i) {
        sum = 0;
        for (int j = 0; j < 4; ++j) {
            sum += score[j][i];
        }
        score[4][i] = sum;
    }
    printf("     ");
    for (int i = 0; i < 5; ++i) {
        printf("%s ", sub[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; ++i) {
        printf("%s ", name[i]);
        for (int j = 0; j < 5; ++j) {
            printf("%3d ", score[i][j]);
        }
        printf("\n");
    }
    return 0;
}
