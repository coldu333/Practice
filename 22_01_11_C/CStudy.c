//문제1
//프로그램 사용자로부터 두 개의 정수를 입력받아서
//두 정수를 포함하여 그 사이에 존재하는 정수들의 합을 계산해서 출력하시오
#include<stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    int sum = 0;

    printf("두 개의 정수를 입력하시오 : ");
    scanf("%d %d", &num1, &num2);
    printf("\n");

    for(int i = 0; num1+i <= num2; i++)
    {
        sum += num1+i;
    }

    printf("결과 값: %d\n", sum);
}