//문제 2
//세 변수에 저장된 값을 서로 바꾸는 함수를 정의해보자
//swap3(&num1, &num2, &num3);
//num1 -> num2
//num2 -> num3
//num3 -> num1
#include <stdio.h>

void Swap3(int* num1, int* num2, int* num3)
{
    int temp = 0;

    temp = *num1;
    *num1 = *num3;
    *num3 = *num2;
    *num2 = temp;
}

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    Swap3(&num1, &num2, &num3);

    printf("\n%d %d %d\n", num1, num2, num3);
}