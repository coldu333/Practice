//문제 1
//난수(Random Number)를 발생시켜야 하는 경우 ANSI 표준에서 난수함수를 제공해준다.
//#include <stdlib.h> int rand(void);
//0~99이하의 난수를 총 5개 생성하는 프로그램을 작성해보자.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0; i<5; i++)
    {
        printf("%d번 난수 : %d\n", i+1, rand()%100);
    }
}