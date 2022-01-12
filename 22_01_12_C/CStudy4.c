//문제4
//조건 연산자를 사용해서
//두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램을 구현해보시오.
//단 무조건 큰 수에서 작은 수를 뺀 결과를 출력해야 한다.
#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    int sum = 0;

    printf("두 개의 정수를 입력하시오 : ");
    scanf("%d %d", &num1, &num2);

    sum = num1>=num2 ? num1-num2 : num2-num1;

    printf("두 정수의 차 : %d\n", sum);

}