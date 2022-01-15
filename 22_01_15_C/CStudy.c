//문제 1
//세 개의 정수를 인자로 전달 받아서
//그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 정의해보자
//그리고 이 함수를 호출하는 적절한 메인 함수도 작성해보자
#include <stdio.h>

int Highnum(int num1, int num2, int num3)
{
    int Highnum;
    if(num1 >= num2)
        Highnum = num1;
    else
        Highnum = num2;
    
    if(Highnum < num3)
            Highnum = num3;
        
    return Highnum;
}

int Lownum(int num1, int num2, int num3)
{
    int Lownum;
    if(num1 <= num2)
        Lownum = num1;
    else
        Lownum = num2;

    if(Lownum > num3)
        Lownum = num3;

    return Lownum;
}

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    printf("세 개의 정수를 입력하시오 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("가장 큰 정수 : %d\n가장 작은 정수 : %d\n",Highnum(num1, num2, num3), Lownum(num1, num2, num3));
}