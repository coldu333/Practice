//문제 2
//프로그램 사용자로부터 두 개의 실수를 입려 받아서
//double형 변수에 저장하자.
//그리고 두 수의 사칙연산의 결과를 출력하자

#include <stdio.h>

int main()
{
    double num1 = 0, num2 = 0;

    printf("두 개의 실수를 입력하시오 : ");
    scanf("%lf %lf", &num1, &num2);
    printf("\n%lf + %lf = %lf\n", num1, num2, num1+num2);
    printf("%lf - %lf = %lf\n", num1, num2, num1-num2);
    printf("%lf * %lf = %lf\n", num1, num2, num1*num2);
    printf("%lf / %lf = %lf\n", num1, num2, num1/num2);
}