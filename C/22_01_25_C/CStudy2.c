//문제 2
//프로그램 사용자로부터 10진수 형태로 정수를 입력 받은 다음
//이를 2진수 형태로 변환해서 출력하는 프로그램을 작성하시오.
#include <stdio.h>

void TenToTwo(int num)
{
    int Cac[100] = {0};
    int count = 0;

    for(int i = 0; i<100; i++)
    {
        Cac[i] = num%2;
        num /= 2 ;

        if(num <= 1)
        {
            count = i+1;
            break;
        }
    }

    printf("%d", num);
    for(int i = count; i > 0; i--)
    {
        printf("%d", Cac[i-1]);
    }
}

int main()
{
    int num = 0;

    printf("한 개의 정수를 입력하시오 : ");
    scanf("%d", &num);

    printf("\n%d의 2진수 : ", num); TenToTwo(num);
    printf("\n");
}