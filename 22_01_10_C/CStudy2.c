//문제2
//do~while문으로 구구단을 구현해보자
#include<stdio.h>

int main()
{
    int dan = 1;
    int num = 1;

    do
    {
        num = 1;
        do
        {
           printf("%d x %d = %d\n", dan, num, dan*num);
           num++;
        } while (num<10);   
        dan++;
    }while(dan<10);
}