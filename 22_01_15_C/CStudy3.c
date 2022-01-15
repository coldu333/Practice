//문제 3
//인자로 전달된 수만큼 피보나치 수열을 출력하는 함수를 정의하시오
//피보나치 수열은 0과 1에서 시작하고 세번째 이후의 수열보터는 이전의 두값의 합으로 구성된다.
#include <stdio.h>

void Fibo(int i)
{
    int num1 = 0, num2 = 1, sum = 0;

    printf("%d, %d,", num1, num2);
    for(int idx = 2; idx < i; idx++)
    {
        sum = num1 + num2;
        printf(" %d,", sum);
        num1 = num2;
        num2 = sum;
    }
    printf("\n");
}

int main()
{
    int i;

    printf("출력하고 싶은 피보나치 수열의 갯수를 입력하시오 : ");
    scanf("%d", &i);

    Fibo(i);
}