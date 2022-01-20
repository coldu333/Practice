//문제 2
//프로그램 사용자로부터 영단어를 입력받아서 char형 배열에 저장한다.
//역순으로 뒤집어 저장 후 출력하시오.
#include <stdio.h>

int main()
{
    char arr[128];
    int idx = 0;

    printf("영단어를 입력하시오 : ");
    scanf("%s", arr);

    while(arr[idx] != '\0')
        idx++;

    printf("\n");
    char temp = ' ';

    for(int i = 0; i<(int)(idx/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[idx-1-i];
        arr[idx-1-i] = temp;
    }
    
    for(int i = 0; i<idx; i++)
    {
        printf("%c", arr[i]);
    }
    

    printf("\n");
}