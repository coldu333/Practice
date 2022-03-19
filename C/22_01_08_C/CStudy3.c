//문제 3
//프로그램 사용자로부터 계속해서 정수를 입력받는다.
//그리고 그 값을 계속 더해 나간다.
//0을 입력하면 모든 정수의 합을 출력하고 프로그램을 종료시킨다.
#include <stdio.h>

int main()
{
    int Result = 0, num = -1;

    printf("정수를 입력하시오: ");

    while(num != 0)
    {
        scanf("%d", &num);
        printf("\n");
        Result += num;
    }

    printf("입력 된 모든 정수의 합 : %d\n", Result);
}