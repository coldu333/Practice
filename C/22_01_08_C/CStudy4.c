//문제 4
//프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 
//역순으로 출력하는 프로그램을 만드시오
#include<stdio.h>

int main()
{
    int dan = 0, i = 9;
    printf("출력할 구구단의 단을 입력하세요 : ");
    scanf("%d", &dan);
    printf("\n");

    while(i > 0)
    {
        printf("%d x %d = %d\n", dan, i, dan*i);
        i--;
    }
}