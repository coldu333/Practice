// 문제 1
// 입력 받은 정수 값의 부호를 바꿔서 출력하는 프로그램을 작성
// 비트연산자를 사용하시오.

#include <stdio.h>

int main()
{
    //변수 선언
    int num = 0;

    printf("하나의 정수를 입력하시오 : ");
    scanf("%d", &num);

    printf("\n결과 : %d\n", ~num + 1); 

}
