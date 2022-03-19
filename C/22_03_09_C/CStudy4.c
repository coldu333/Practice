//문제 3
//두 값의 크기를 비교하여 큰 값을 반환하는 매크로 함수 MAX를 정의하자
//조건 연산자를 이용해라
#include<stdio.h>
#define MAX(A, B) ((A > B) ? (A) : (B))

int main()
{
    int num1, num2;
    printf("두 개의 숫자르 입력하시오 : ");
    scanf("%d %d", &num1, &num2);

    printf("%d와 %d중 %d가 더 큽니다.", num1, num2, MAX(num1, num2));
}