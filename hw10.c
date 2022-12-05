//
// Created by 김동윤 on 2022/12/05.
//

#include <stdio.h>

typedef struct {
    char name[20];
    char country[20];
    int pop;
} City;

int main(void) {
    City cities[3];
    printf("Input three cities: \n");
    for (int i = 0; i < 3; ++i) {
        printf("Name> ");
        scanf("%s", cities[i].name);
        printf("Country> ");
        scanf("%s", cities[i].country);
        printf("Population> ");
        scanf("%d", &cities[i].pop);
    }
    printf("Printing the three cities: \n");
    for (int i = 0; i < 3; ++i) {
        printf("%d. %s in %s with a population of %d people \n", i+1, cities[i].name, cities[i].country, cities[i].pop);
    }
    return 0;
}
