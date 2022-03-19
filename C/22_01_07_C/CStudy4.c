//문제4
//프로그램 사용자로부터 알파벳 하나를 입력받은 후
//아스키코드 값을 출력하는 프로그램을 작성하시오

#include <stdio.h>

int main()
{
    char alpha = ' ';
    printf("알파벳을 하나 입력하시오 : ");
    scanf("%c", &alpha);

    printf("\n%c : %d\n", alpha, alpha);
}