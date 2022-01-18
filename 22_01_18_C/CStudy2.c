//문제 2
//프로그램 사용자로부터 숫자 n을 입력받는다.
//2(k) <= n 이 성립하는 최대값을 계산해 출력하는 프로그램을 작성하시오
#include <stdio.h>

int main()
{
    int n = 0, k = 0, num = 2;

    printf("한 개의 정수를 입력하시오 : ");
    scanf("%d", &n);

    for(int i = 1; i < 100; i++)
    {
        num*=2;
        if(num >= n)
        {
            k = i;
            break;
        }
    }

    printf("최댓값 : %d\n", k+1);
}