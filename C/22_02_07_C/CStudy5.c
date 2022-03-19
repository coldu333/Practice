//문제 2
//두개의 주사위를 던졌을 때의 결과를 출력하는 프로그램을 작성해보자.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((int)time(NULL));
    printf("주사위 1의 결과 : %d\n", (rand()%6) + 1 );
    printf("주사위 2의 결과 : %d\n", (rand()%6) + 1 );
}