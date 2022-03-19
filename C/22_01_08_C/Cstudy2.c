//문제2
//프로그램 사용자로부터 양의 정수를 하나 입력받아서
//그 수만큼 3의 배수를 출력하는 프로그램을 작성하시오
#include <stdio.h>

int main()
{
    int num = 0, i = 0;

    printf("양의 정수 하나를 입력하세요 : ");
    scanf("%d", &num);

    while(i < num)
    {
        printf("%d, ", 3*(i+1));
        i++;
    }

    printf("\n");
}