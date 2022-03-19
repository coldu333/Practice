//문제 1
//프로그램 사용자로부터 하나의 영단어를 입력 받아서
//입력받은 영단어의 길이를 계산해서 출력하는 프로그램을 작성해보자.
#include <stdio.h>

int main()
{
    char arr[128];
    int count = 0;

    printf("영단어를 입력하시오 : ");
    scanf("%s", arr);

    int i = 0;
    while(arr[i] != '\0')
    {
        i++;
    }

    printf("\n영단어의 길이 : %d\n", i);
}