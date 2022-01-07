//문제 3
//아스키 코드 값을 정수 형태로 입력 받은 후
//해당 정수의 아스키 코드 문자를 출력하는 프로그램을 작성하시오

#include <stdio.h>

int main()
{
    int num = 0;
    printf("0 ~ 127 사이의 정수 한 개를 입력하시오 : ");
    scanf("%d", &num);

    printf("%d : %c\n", num, num);
}