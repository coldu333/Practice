//하노이 타워의 순서를 출력해보자
#include<stdio.h>

void HanoiTower(int Count, char From, char By, char To)
{
    if(Count == 1)
    {
        printf("원반 1을 %c에서 %c로 이동 \n", From, To);
    }
    else
    {
        HanoiTower(Count-1, From, To, By);
        printf("원반%d를 %c에서 %c로 이동 \n", Count, From, To);
        HanoiTower(Count-1, By, From, To);
    }
}

int main()
{
    int Count = 0; //원반 갯수
    HanoiTower(3, 'A', 'B', 'C');
}