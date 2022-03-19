//문제 2
//10개의 소수 구하기
#include <stdio.h>

int main()
{
    int i = 0;
    int count = 1;

    printf("1 ");


    for(int num = 2; num < 100; num++)
    {
        if(count > 9)
        break;

        for(i = 2; i<num; i++)
        {
            if(num%i == 0)
                break;
        }

        if(num == i)
        {
            printf("%d ", num);
            count ++;
        }
    }
    printf("\n");
}