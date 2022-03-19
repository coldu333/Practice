//#연산자
#include <stdio.h>
#define STRING_JOB(A, B) #A "의 직업은 " #B "입니다."
//#define STNUM(Y, S, P) YSP
//#define STNUM(Y, S, P) Y S P
//#define STNUM(Y, S, P) ((Y)*100000+(S)*1000+(P))
#define STNUM(Y, S, P) Y ## S ## P

int main()
{
    printf("%s \n", STRING_JOB(이동춘, 나무꾼));
    printf("%s \n", STRING_JOB(한상순, 사냥꾼));

    printf("학번 : %d \n", STNUM(10, 65, 175));
    printf("학번 : %d \n", STNUM(10, 65, 075));
}