//문제3
//학생 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성하자.
//학생 성적이 90이상 A
//학생 성적이 80이상 B
//학생 성적이 70이상 C
//학생 성적이 50이상 D
//50미만 F
//국어, 영어, 수학 점수를 입력받고 평균을 구한 다음 학점을 출력하시오
#include <stdio.h>

int main()
{
    int kor = 0, eng = 0, math = 0;
    float avr = 0;

    printf("국어 점수를 입력하시오 : ");
    scanf("%d", &kor);
    printf("\n영어 점수를 입력하시오 : ");
    scanf("%d", &eng);
    printf("\n수학 점수를 입력하시오 : ");
    scanf("%d", &math);

    avr = (kor+eng+math)/3;
    if(avr >= 90)
        printf("\n학점 : A");
    else if(avr >= 80)
        printf("\n학점 : B");
    else if(avr >= 70)
        printf("\n학점 : C");
    else if(avr >= 50)
        printf("\n학점 : D");
    else
        printf("\n학점 : F");

    printf("\n");
}