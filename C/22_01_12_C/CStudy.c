//문제 1
//1이상 100미만 정수 중 7의 배수와 9의 배수를 출력하는 프로그램을 작성해보자
//단 7과 9의 공배수는 한번만 출력해야한다.
#include <stdio.h>

int main()
{
    int num = 0;

    for(num = 1; num<100; num++)
    {
        if(num%7 == 0 || num%9 == 0)
            printf("%d, ", num);
    }
    printf("\n");
}