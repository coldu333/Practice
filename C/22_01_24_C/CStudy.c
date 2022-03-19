//문제 1
//변수 num에 저장된 값의 제곱을 계산하는 함수를 정의
//이를 호출하는 메인함수
//call by value SquareByValue
//call by reference SquareByReference
//두 개의 함수를 작성하시오.
#include <stdio.h>

int SquareByValue(int num)
{
    return num*num;
}

int SquareByReference(int* num)
{
    *num *= *num;

    return *num;
}

int main()
{
    int num = 0;

    printf("한 개의 정수를 입력하시오 : ");
    scanf("%d", &num);

    printf("CallByValue : %d\n", SquareByValue(num));
    printf("CallByReference : %d\n", SquareByReference(&num));
}