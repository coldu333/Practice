//문제 2
//프로그램 사용자로부터 세 개의 정수 num1 num2 num3을 순서대로 입력 받은 후,
//다음 연산의 결과를 출력하는 프로그램을 작성해보자
//num1 x num2 + num3

#include <stdio.h>

int main()
{
    //변수의 선언
    int num1 = 0, num2 = 0, num3 = 0;
    printf("세 개의 정수를 입력하시오 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("\n %dx%d+%d = %d\n", num1, num2, num3, num1*num2+num3);
}