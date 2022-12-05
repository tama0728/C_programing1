//
// Created by 김동윤 on 2022/12/05.
//

#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos; } Point;

void SwapPoint(Point *p1, Point *p2){
//    int temp;
//    temp = p1->xpos;
//    p1->xpos = p2->xpos;
//    p2->xpos = temp;
//
//    temp = p1->ypos;
//    p1->ypos = p2->ypos;
//    p2->ypos = temp;
    Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void) {
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};

    printf("pos1 : [%d, %d] \n", pos1.xpos, pos1.ypos);
    printf("pos2 : [%d, %d] \n", pos2.xpos, pos2.ypos);
    printf("Swap \n");
    SwapPoint(&pos1, &pos2);
    printf("pos1 : [%d, %d] \n", pos1.xpos, pos1.ypos);
    printf("pos2 : [%d, %d] \n", pos2.xpos, pos2.ypos);

    return 0;
}
