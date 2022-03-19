//문제2
//총 5행을 거쳐서 출력하며
//행이 더해질 때마다 o문자의 수가 증가한다,
#include <stdio.h>

int main()
{
    int num = 0;
    int i = 0;
    while(num < 5)
    {
        while(i < num)
        {
            printf("o");
            i++;
        }
        i = 0;
        printf("*\n");
        num ++;
    }
}