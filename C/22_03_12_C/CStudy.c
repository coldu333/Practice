//문제1
//문자열을 저장하고 있는 파일을 열어서
//A와 P로 시작하는 단어의 수를 세어서 출력하는 프로그램을 작성
#include<stdio.h>

int main()
{
    FILE * Text = fopen("text.txt", "rt");
    int Acount = 0, Pcount = 0;
    char ch[100];

    while(1)
    {
        if(feof(Text)!=0)
            break;

        fscanf(Text, "%s", ch);
        if(ch[0] == 'A' || ch[0] == 'a')
            Acount++;
        else if(ch[0] == 'P' || ch[0] == 'p')
            Pcount++;
    }
    
    printf("A로 시작하는 단어의 수 : %d\n", Acount);
    printf("P로 시작하는 단어의 수 : %d\n", Pcount);

    fclose(Text);
}