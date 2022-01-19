//문제 2
//char형의 1차원 배열을 선언과 동시에 다음 문장의 내용으로 초기화하고 출력하시오.
//"Good time"
#include<stdio.h>

int main()
{
    char arr[] = {'\"', 'G', 'o', 'o', 'd', ' ', 'T', 'i', 'm', 'e', '\"', '\0'};
    int arrSize = sizeof(arr)/sizeof(char);

    for(int i = 0; i<arrSize; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n");
}