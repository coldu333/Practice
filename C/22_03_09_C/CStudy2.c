//문제 1
//세 개의 정수를 인자로 받아서 이 셋 정수의 덧셈결과와 곱셈결과를 반환하는 매크로 함수를 각각 정의해보자
#include <stdio.h>
#define ADD(X, Y, Z) X+Y+Z
#define MULTI(X, Y, Z) X*Y*Z

int main()
{
    int x, y, z;
    printf("세 개의 정수를 입력하시오 : ");
    scanf("%d %d %d", &x, &y, &z);

    printf("\n덧셈 결과 : %d\n", ADD(x, y, z));
    printf("곱셈 결과 : %d\n", MULTI(x, y, z));
}