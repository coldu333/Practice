//문제 1
//프로그램 사용자로부터 알파벳 문자를 하나 입력받아서
//입력받은 문자가 대문자이면 이를 소문자로 변환해서 출력하고
//소문자를 입력하면 대문자로 변환해주는 프로그램을 작성하자.
//getchar과 putchar을 이용하고 알파벳이 아닌 문자를 입력하면 오류메세지를 출력하자.
#include <stdio.h>

int main()
{
    int ch;
    
    printf("알파벳을 한 개 입력하세요 : ");

    while(1)
    {
        ch = getchar();
        getchar();

        if(ch > 64 && ch < 91) //대문자이면
            ch += 32;
        else if(ch > 96 && ch < 123) //소문자이면
            ch -= 32;
        else // 알파벳이 아니면
        {
            printf("알파벳이 아닙니다. 다시 입력해주세요.\n");
            continue;
        }

        putchar(ch);
        getchar();

        break;
    }
}