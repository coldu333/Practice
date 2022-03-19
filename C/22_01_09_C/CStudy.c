//문제1
//프로그램 사용자로부터 총 5개의 정수를 입력받아서
//그 수의 합을 출력하는 프로그램을 작성해보자
//단, 정수는 반드시 1이상이어야 한다.
//만약 1미만의 수가 입력되는 경우에는 이를 입력으로 인정하지 않고 재입력을 요구해야 한다.

#include <stdio.h>

int main()
{
    int num = 0, sum = 0;
    int i = 0;

    while(i<5)
    {
        printf("%d번 정수를 입력하시요", i+1);
        scanf("%d", &num);

        if(num < 1)
        {
            printf("정수는 반드시 1이상이어야 합니다.\n");
            continue;
        }
        else
        {
            sum += num;
            i++;
        }
    }

    printf("5개의 정수의 합 : %d\n", sum);
}