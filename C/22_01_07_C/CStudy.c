//문제 1
//프로그램 사용자로부터 두 점의 x, y 좌표를 입력 받아서
//두 점이 이루는 직사각형의 넓이를 계산 하여 출력하는 프로그램을 작성해보자
//단, 좌 상단의 x,y좌표 값이 우 하단의 x,y좌표 값보다 작다
//좌 상단의 좌표정보를 먼저 입력하자

#include <stdio.h>

int Lx = 0, Ly = 0;
int Rx = 0, Ry = 0;

int Input()
{
    printf("좌 상단의 x, y 좌표를 입력하시오 : ");
    scanf("%d %d", &Lx, &Ly);
    printf("우 하단의 x, y 좌표를 입력하시오 : ");
    scanf("%d %d", &Rx, &Ry);
}

int main()
{
    Input();
    
    if(Lx > Rx || Ly > Ry)
    Input();

    printf("좌 상단의 x, y 좌표 : %d %d\n", Lx, Ly);
    printf("좌 상단의 x, y 좌표 : %d %d\n", Rx, Ry);
    printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n",(Rx - Lx)*(Ry - Ly));

}
