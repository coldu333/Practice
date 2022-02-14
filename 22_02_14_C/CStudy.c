//문제 1
//프로그램 사용자로부터 이름과 나이를 다음의 형식에 맞춰서 하나의 문자열로 입력받는다.
//이름 나이
//이름의 문자수는 제한이 없고 영문이어도 괜찮다. 단 이름과 나이 사이에 공백이 삽입되어야 한다.
//두 사람의 정보를 입력받아서 이름과 나이가 각각 다른지 같은지 판단해서 출력하자
#include <stdio.h>
#include <string.h>

int isSpace(char* str) //공백 체크 함수
{
    for(int i=0; i< strlen(str); i++)
    {
        if(str[i] ==' ')
            return 1;
    }
    puts("이름과 나이 사이에 공백을 추가해주세요.");
    return 0;
}

int isName(char* str) //이름 체크 함수
{
    for(int i=0; i< strlen(str); i++)
    {
        if(str[i] ==' ')
            return 1;
        else if(str[i] > 47 && str[i] < 58)
        {
            puts("이름에 숫자가 포함되어 있습니다. 다시 입력해주세요.");
            return 0;
        }
    }
    return 1;
}

int isAge(char* str) //나이 확인 함수
{
    int idx = 0;
    for(int i=0; i< strlen(str); i++)
    {
        if(str[i] ==' ')
        {
            idx = i;
            break;
        }  
    }

    for(int i = idx+1; i<strlen(str); i++)
    {
        if(str[i] < 48 || str[i] > 57)
        {
            puts("나이를 잘못 입력했습니다. 다시 입력해주세요.");
            return 0;
        }
    }
    return 1;
}

void Compare(char* str1, char* str2) //이름과 나이 비교 함수
{
    char Name1[64] ={'\0'}, Name2[64]={'\0'};
    
    for(int i = 0; i<strlen(str1); i++)
        if(str1[i] == ' ')
        {
            strncpy(Name1, str1, i);
            break;
        }

    for(int i = 0; i<strlen(str2); i++)
        if(str2[i] == ' ')
        {
            strncpy(Name2, str2, i);
            break;
        }

    if(strcmp(Name1, Name2)==0)
        puts("이름이 같습니다.");
    else
        puts("이름이 다릅니다.");
    
    char Age1[64] ={'\0'}, Age2[64] ={'\0'};
    int idx = 0;

    for(int i=0; i<strlen(str1); i++)
    {
        if(str1[i] > 47 && str1[i] < 58)
        {
            Age1[idx] = str1[i];
            idx++;
        }
    }

    idx = 0;
    for(int i=0; i<strlen(str2); i++)
    {
        if(str2[i] > 47 && str2[i] < 58)
        {
            Age2[idx] = str2[i];
            idx++;
        }
    }
    
    if(strcmp(Age1, Age2)==0)
        puts("나이가 같습니다.");
    else
        puts("나이가 다릅니다.");
}

int main()
{
    char str1[64];
    char str2[64];

    while(1)
    {
        puts("1번 이름과 나이를 입력하세요.");
        gets(str1);

        if(isSpace(str1) == 1 && isName(str1) == 1 && isAge(str1))
            break;
    }

    while(1)
    {
        puts("2번 이름과 나이를 입력하세요.");
        gets(str2);

        if(isSpace(str2) == 1 && isName(str2) == 1 && isAge(str2))
            break;
    }
    
    Compare(str1, str2);
}