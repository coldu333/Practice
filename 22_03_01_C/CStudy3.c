//문제1
//프로그램 사용자로부터 문자열을 입력 받아 
//문자열의 단어를 역으로 출력하는 프로그램을 작성하자
//"I am a boy" => "boy a am I"
//단, 문자열의 입력 전 입력할 문자열의 최대 길이 정보를 입력 받는다.
//그 길이 만큼 동적 할당한다.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size = 0;
    int term = 0;

    printf("최대 몇 자를 입력하시겠습니까? : ");
    scanf("%d", &size);
    while(getchar()!='\n');

    char * Eng = (char*)malloc(sizeof(char) * size);

    printf("영어 문장을 입력하세요");
    gets(Eng);
    size = strlen(Eng);
    for(int i = size; i>=0; i--)
    {
        if(Eng[i] == ' ')
            for(int j = i; j<size; j++)
            {
                printf("%c", Eng[j]);
                Eng[j] = 0;
            }        
    }

    printf(" %s\n", Eng);

    free(Eng);
}