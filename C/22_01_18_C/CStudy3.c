//문제 3
//2의 n승을 구하는 재귀적 함수를 구현해보자
#include<stdio.h>

int twoEx(int num, int result)
{
    if(num == 0)
    return result;
    else
    {
        result *= 2;
        return twoEx(num-1, result);
    }
}

int main()
{
    int num = 0;
    int result = 1;

    printf("정수 하나를 입력하세요 : ");
    scanf("%d", &num);

    printf("2의 %d승은 %d\n", num, twoEx(num, result));
}