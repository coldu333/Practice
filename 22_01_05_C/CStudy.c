//문제 1
//프로그램 사용자로부터 두개의 정수를 입력받아서
//두 수의 뺄셈과 곱셈의 결과를 출력하는 프로그램을 작성하시오

#include<stdio.h>

int main()
{
    int num1 = 0; //정수 값을 받을 변수 선언
    int num2 = 0;

    printf("두 개의 정수를 입력하시오: "); 
    scanf("%d %d", &num1, &num2); //입력값이 각 변수에 저장

    printf("\n두 수의 뺄셈 : %d\n", num1 - num2);
    printf("두 수의 곱셈 : %d\n", num1*num2);
}