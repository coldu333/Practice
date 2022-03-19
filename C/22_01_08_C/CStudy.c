//문제 1
//프로그램 사용자로부터 양의 정수를 하나 입력받아서
//그 수만큼 "Hello World!"를 출력하는 프로그램을 작성해보자

#include <stdio.h>

int main()
{
    int num = 0;
    int i = 0;
    printf("양의 정수 하나를 입력해주세요 : ");
    scanf("%d", &num);

    if(num < 1)
    {
        printf("\n잘못된 입력입니다.\n양의 정수 하나를 입력해주세요 : ");
        scanf("%d", &num);
        printf("\n");
    }

    while(i < num)
    {
        printf("Hello World!\n");
        i++;
    }
}