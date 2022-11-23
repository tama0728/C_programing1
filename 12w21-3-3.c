//
// Created by 김동윤 on 2022/11/23.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char name1[20], name2[20];
    int age1, age2;

    scanf("%s %d", name1, &age1);
    scanf("%s %d", name2, &age2);

    if(!strcmp(name2, name1))
        printf("name is same \n");
    else
        printf("name is not same \n");

    if (age1 == age2)
        printf("age is same \n");
    else
        printf("age is not same \n");

    return 0;
}
