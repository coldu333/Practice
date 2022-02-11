//문제 1
//적당한 길이의 문자열을 입력받아서 
//그 안에 존재하는 숫자의 총 합을 계산해서 출력하는 프로그램을 작성해보자.
//ex) A15#43 => 1+5+4+3 출력
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[64], temp[64];
    int sum = 0;

    puts("원하는 숫자와 영어를 입력하시오: ");
    scanf("%s", str);

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] > 47 && str[i] < 58)
        {
            temp[0] = str[i]; //임시 저장소로 옮겨 담고 atoi를 통해 문자를 숫자로 바꾼다.
            sum += atoi(temp);
        }
    }

    printf("%d \n", sum);
}