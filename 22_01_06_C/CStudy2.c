// 문제 2
// 다음 연산의 결과를 출력하는 프로그램을 작성하시오
// 3 x 8 / 4 = (6)
// 단, 비트연산자를 사용하시오

#include <stdio.h>

int main()
{
    int Result = 0;
    Result = 3 << 3 >> 2;
    //비트 연산자 <<은 왼쪽으로 비트열을 동시키는 연산자이다.
    //왼쪽으로 한 칸씩 이동할 때 마다 원래 값의 2배수가 된다.
    //비트 연산자 >>은 오른쪽으로 비트열을 이동시키는 연산자이다.
    //오른쪽으로 한 칸씩 이동할 때 마다 원래 값을 2로 나누는 값이 나온다.

    printf("3*8/4 = %d\n", Result);
}