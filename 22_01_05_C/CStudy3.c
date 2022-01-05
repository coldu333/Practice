//문제 3
//하나의 정수를 입력 받아서
//그 수의 제곱의 결과를 출력하는 프로그램을 작성하시오

#include <stdio.h>

int main()
{
    //변수 선언
    int num = 0;

    printf("하나의 정수를 입력하시오 : ");
    scanf("%d", &num);

    printf("\n%d의 제곱 : %d\n", num, num*num);
}