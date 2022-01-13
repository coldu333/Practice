//문제 2
//다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성하시오
//AZ + ZA = 99;
#include <stdio.h>

int main()
{
    int A = 0, Z = 0;
    int sum = 0;
    
    for(A=0; A<10; A++)
    {
        for(Z=0; Z<10; Z++)
        {
            sum = 11*A + 11*Z;
            if(sum == 99)
            {
                printf("A = %d, Z = %d\n",A, Z);
                continue;
            }
        } 
    }
}