//문제 1
//회문은 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어이다.
//level, bob같은 단어들
//영어 단어가 회문인지 아닌지를 판단해 그 결과를 출력하는 기능의 함수를 정의하고
//main함수를 작성해보자.
#include <stdio.h>

void IsPal(char* word)
{
    int FIdx = 0;
    int BIdx = 0;

    for(int i = 0; i<128; i++)
    {
        if(word[i] == '\0')
        {
            BIdx = i;
            break;
        }
    }
    
    for(int i = 0; i<(BIdx/2); i++)
    {
        if(word[FIdx] != word[BIdx-1])
        {
            printf("회문이 아닙니다.\n");
            return;
        }

        FIdx ++;
        BIdx --;
    }
    
    
    printf("회문입니다.\n");
}

int main()
{
    char word[128] = {'\0'};

    printf("영단어를 하나 입력해주세요 : ");
    scanf("%s", word);

    IsPal(word);
}