//문제 2
//원주율 PI를 매크로 상수로 정의하고 이를 이용해서 원의 넓이를 구하는 AREA 매크로 함수를 정의해보자
#include <stdio.h>
#define PI 3.14
#define AREA(R) R*R*PI

int main()
{
    int r;
    printf("원의 반지름을 입력하세요 : ");
    scanf("%d", &r);

    printf("\n원의 넓이 : %g\n", AREA(r));
}