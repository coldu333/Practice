//문제 1
//프로그램 사용자로 부터 초를 입력받은 후
//[시 분 초]의 형태로 출력하는 프로그램을 작성해보자
#include <stdio.h>

int main()
{
    int sec = 0, min = 0, hour = 0;

    printf("초를 입력하세요 : ");
    scanf("%d", &sec);

    min = (int)sec/60;
    hour = (int)min/60;
    min %= 60;
    sec %= 60;

    printf("\n[%d시간 %d분 %d초]\n", hour, min, sec);
}