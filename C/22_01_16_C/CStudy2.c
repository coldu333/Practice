//문제 2
//프로그램 사용자로부터 두 개의 정수를 입력받아
//그 사이의 구구단을 출력하는 프로그램을 작성하시오.
//단, 오름차순으로 구구단을 출력하시오.
#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;

    printf("두 개의 정수를 입력하시오 : ");
    scanf("%d %d", &num1, &num2);
    printf("\n");

    if(num1 > num2)
    {
        for(int dan = num2; dan <= num1; dan++)
        {
            for(int i = 1; i<10; i++)
            {
                printf("%d x %d = %d\n", dan, i, dan*i);
            }
        }
    }
    else if(num2 >= num1)
    {
        for(int dan = num1; dan <= num2; dan++)
        {
            for(int i = 1; i<10; i++)
            {
                printf("%d x %d = %d\n", dan, i, dan*i);
            }
        }
    }
}