//문자 입출력
#include <stdio.h>

int main()
{
    int ch1, ch2;

    ch1 = getchar(); //입력
    ch2 = fgetc(stdin);//엔터 입력

    putchar(ch1); //출력
    fputc(ch2, stdout); //엔터 출력

    int ch;

    while(1)
    {
        ch=getchar();
        if(ch==EOF) //CTRL + D를 누르면 EOF가 출력 된다.
            break;
        putchar(ch); 
    }
}