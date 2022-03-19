//문제 1
//좌 상단의 x,y 좌표가 [0, 0], 우 하단의 x, y 좌표가 [100, 100]인
//좌표평면 상 직사각형 정보를 표현하기 위해 구조체 Rectangle을 정의하되
//typedef struct point
//{int xpos; int ypos;}Point; 를 기반으로 정의하자
//Rectangle 구조체 변수를 인자로 전달받아서 
//직사각형 넓이를 계산해 출력하는 함수와 직사각형을 이루는 4점의 좌표정보를 출력하는 함수 각각를 정의해보자
//Rectangle 변수 내에는 두 점의 정보만 존재한다.
#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct rectangle
{
    Point p1;
    Point p2;
} Rectangle;

void RectArea(Rectangle *rect)
{
    int col, row;

    if((rect->p1).xpos < (rect->p2).xpos)
        col = (rect->p2).xpos - (rect->p1).xpos;
    else if((rect->p1).xpos > (rect->p2).xpos)
        col = (rect->p1).xpos - (rect->p2).xpos;

    if((rect->p1).ypos < (rect->p2).ypos)
        row = (rect->p2).ypos - (rect->p1).ypos;
    else if((rect->p1).ypos > (rect->p2).ypos)
        row = (rect->p1).ypos - (rect->p2).ypos;
    
    printf("사각형의 넓이 : %d\n\n",col*row);
}

void RectPoint(Rectangle *rect)
{
    Point leftTop, leftBot, rightTop, rightBot;

    if((rect->p1).xpos < (rect->p2).xpos)
    {
        leftTop.xpos = (rect->p1).xpos;
        leftBot.xpos = (rect->p1).xpos;
        rightTop.xpos = (rect->p2).xpos;
        rightBot.xpos = (rect->p2).xpos;
    }
    else if((rect->p1).xpos > (rect->p2).xpos)
    {
        leftTop.xpos = (rect->p2).xpos;
        leftBot.xpos = (rect->p2).xpos;
        rightTop.xpos = (rect->p1).xpos;
        rightBot.xpos = (rect->p1).xpos;
    }

    if((rect->p1).ypos > (rect->p2).ypos)
    {
        leftTop.ypos = (rect->p1).ypos;
        rightTop.ypos = (rect->p1).ypos;
        leftBot.ypos = (rect->p2).ypos;
        rightBot.ypos = (rect->p2).ypos;
    }
    else if((rect->p1).ypos < (rect->p2).ypos)
    {
        leftTop.ypos = (rect->p2).ypos;
        rightTop.ypos = (rect->p2).ypos;
        leftBot.ypos = (rect->p1).ypos;
        rightBot.ypos = (rect->p1).ypos;
    }

    printf("좌측상단 [%d, %d]\n", leftTop.xpos, leftTop.ypos);
    printf("우측상단 [%d, %d]\n", rightTop.xpos, rightTop.ypos);
    printf("좌측하단 [%d, %d]\n", leftBot.xpos, leftBot.ypos);
    printf("우측하단 [%d, %d]\n", rightBot.xpos, rightBot.ypos);
}

int main()
{
    Rectangle rect = {{1,1}, {11, 11}};

    RectArea(&rect);
    RectPoint(&rect);
}