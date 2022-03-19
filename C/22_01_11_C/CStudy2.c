//문제2
//사용자로부터 정수를 입력받아 해당 정수의
//팩토리얼을 계산하는 프로그램을 작성하시오
#include <stdio.h>

int main()
{
    int num = 0;
    int result = 1;

    printf("정수 한 개를 입력하시오: ");
    scanf("%d", &num);

    for(int i = 0; i<num; i++)
    {
        result *= num-i;
    }

    printf("결과 값 : %d\n", result);
}