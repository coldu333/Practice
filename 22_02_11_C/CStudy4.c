//문제2
//char str1[20], str2[20], str3[20];
//str1과 str2을 통해 문자열을 입력 받는다.
//str1을 str3으로 복사하고
//str2를 str3 뒤에 덧붙이자.
//그리고 str3을 출력하자
#include <stdio.h>
#include <string.h>

void ClearBuffer()
{
    while(getchar()!='\n');
}

int main()
{
    char str1[20];
    char str2[20];
    char str3[20];

    puts("str1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1)] = '\0'; //'\n'없애기
    ClearBuffer();

    puts("str2: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strlen(str2)] = '\0';
    ClearBuffer();

    strcpy(str3, str1);
    strcat(str3, str2);

    puts("str3: ");
    puts(str3);
}