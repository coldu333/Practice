//문제 1
//10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main()
{
    int num = 0;

    printf("한 개의 정수를 입력하시오 : ");
    scanf("%d", &num);

    printf("\n10진수 %d : 16진수 %X\n", num, num);
}