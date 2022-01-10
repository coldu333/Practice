//문제1
//0~100이하의 정수 중 짝수의 합을 출력하는 프로그램을 구현하시오
//단 do~while문을 사용할 것.
#include <stdio.h>

int main()
{
    int sum = 0;
    int num = 0;

    do
    {
        if(num%2 == 0)
            sum += num;
        
        num++;
    } while (num <= 100);

    printf("0~100이하의 짝수의 합 : %d\n", sum);
    
}