//문제 1
//구구단을 출력하되 짝수 단만 출력하시오.
//또한 2단 2까지, 4단은 4까지, 6단은 6까지, 8단은 8까지 출력하시오
//break와 continue을 사용하시오
#include <stdio.h>

int main()
{
    int dan = 1, num = 1;
    for(dan = 1; dan < 10; dan++)
    {
        if(dan%2==1)
        continue;
        else
        for(num = 1; num < 10; num++)
        {
            if(dan<num)
            break;
            printf("%d x %d = %d\n",dan, num, dan*num);
        }
    }
}
