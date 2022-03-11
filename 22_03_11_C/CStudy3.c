//문제 3
//복소수를 나타내는 구조체를 정의하고
//복소수의 덧셈과 곱셈을 위한 함수를 각각 정의하자
//그리고 이를 기반으로 프로그램 사용자로부터 두 개의 복소수 정보를 입력 받아서
//두 복소수의 덧셈의 결과를 출력하는 프로그램을 작성하자
#include <stdio.h>

typedef struct
{
    float real;
    float imag;
}COMPLEX;

COMPLEX AddCom(COMPLEX a, COMPLEX b)
{
    COMPLEX answer;
    answer.real = a.real + b.real;
    answer.imag = a.imag + b.imag;
    return answer;
}

COMPLEX MulCom(COMPLEX a, COMPLEX b)
{
    COMPLEX answer;
    answer.real = (a.real*b.real) - (a.imag*b.imag);
    answer.imag = (a.real*b.imag) + (a.imag*b.real);
    return answer;
}

int main()
{
    COMPLEX a, b;
    printf("복소수 입력 1[실수 허수]:");
    scanf("%f %f", &a.real, &a.imag);
    printf("복소수 입력 2[실수 허수]:");
    scanf("%f %f", &b.real, &b.imag);

    printf("합의 결과[실수 : %f 허수 : %f]", AddCom(a,b).real, AddCom(a,b).imag);
    printf("곱의 결과[실수 : %f 허수 : %f]", MulCom(a,b).real, MulCom(a,b).imag);
}