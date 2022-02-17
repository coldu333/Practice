//함수와 구조체 변수
#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
}Point;

void ShowPosition(Point pos)//함수 인자인 구조체 변수
{
    printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)//함수의 반환형인 구조체 변수
{
    Point cen;
    printf("Input current pos: ");
    scanf("%d %d", &cen.xpos, &cen.ypos);
    return cen;
}

int main()
{
    Point curPos = GetCurrentPosition();
    ShowPosition(curPos);
}