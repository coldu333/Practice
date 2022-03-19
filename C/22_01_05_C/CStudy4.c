//입력 받은 두 정수를 나누었을 때
//얻게 되는 몫과 나머지를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main()
{
    //변수의 선언
    int num1 = 0, num2 = 0;

    printf("두 개의 정수를 입력하시오 : ");
    scanf("%d %d", &num1, &num2);

    printf("\n%d÷%d의 몫 : %d, 나머지 : %d\n", num1, num2, num1/num2, num1%num2);
}