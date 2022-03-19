//문제 5
//입력 받은 세 개의 정수 num1, num2, num3을 대상으로
//다음 연산의 결과를 출력하는 프로그램을 작성해보자
//(num1-num2)x(num2+num3)x(num3%num1)

#include <stdio.h>

int main()
{
    //변수 선언
    int num1 = 0, num2 = 0, num3 = 0;
    int Result = 0;

    printf("세 개의 정수를 입력하시오 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    Result = (num1-num2)*(num2+num3)*(num3%num1);

    printf("\n결과 : %d\n", Result);
}