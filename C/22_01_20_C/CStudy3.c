//문제 3
//프로그램 사용자로부터 영단어를 입력받는다.
//그 중 아스키 코드의 값이 가장 큰 문자를 찾아서 출력하시오
#include <stdio.h>

int main()
{
    char arr[128];
    int max = 0, idx = 0;

    printf("영단어를 입력하세요 : ");
    scanf("%s", arr);

    while(arr[idx] != '\0')
    {
        if(max < arr[idx])
            max = idx;
        idx++;
    }

    printf("\n%c : %d\n", arr[max], arr[max]);
}