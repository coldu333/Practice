//문제 1
//typedef struct point
//{ int xpos; int ypos;}Point;
//위의 구조체의 두 변수를 대상으로 지정된 값을 서로 바꿔주는 함수를 정의하고 호출하자
//ex) Point pos1={5,6}; Point pos2={8,9};
//SwapPoint라는 함수를 정의 및 호출해 두 변수의 값을 바꿔줘야 한다.
#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point *pos1, Point *pos2)
{
    Point temp;
    
    temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}

int main()
{
    Point pos1 = {1,2};
    Point pos2 = {3,4};

    SwapPoint(&pos1, &pos2);

    printf("pos1 = [%d, %d]\n", pos1.xpos, pos1.ypos);
    printf("pos2 = [%d, %d]\n", pos2.xpos, pos2.ypos);
}