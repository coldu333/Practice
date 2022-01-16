//문제 3
//두 개의 정수를 입력 받아 최대 공약수를 구하는 프로그램을 작성하시오.
#include<stdio.h>

int High(int num1, int num2)
{
    int high = 0;

    if(num1 >= num2)
    {
        for(int i = num2; i <= num1; i++)
        {
            if(num1%i == 0 && num2%i == 0)
                high = i;
        }
    }
    else
    {
        for(int i = num1; i <= num2; i++)
        {
            if(num1%i == 0 && num2%i == 0)
                high = i;
        }
    }

    return high;
}

int main()
{
    int num1 = 0, num2 = 0;

    printf("두 개의 정수를 입력하시오 : ");
    scanf("%d %d", &num1, &num2);

    printf("\n%d와 %d의 최대공약수 : %d\n", num1, num2, High(num1, num2));
}