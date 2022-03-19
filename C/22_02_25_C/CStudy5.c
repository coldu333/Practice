//문제3
//문제1과 문제2를 출력하는 프로그램을 작성하자
#include<stdio.h>

int main()
{
    FILE * fp = fopen("mystory.txt", "rt");

    char str[40];

    while(1)
    {
        if(feof(fp)!= 0)
            break;
        fgets(str, sizeof(str), fp);
        printf("%s", str);
    }
    
    printf("\n");
}