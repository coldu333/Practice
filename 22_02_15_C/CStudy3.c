//문제 1
//문자열 형태의 종업원 이름, 문자열 형태의 주민등록번호, 정수 형태의 급여정보를 저장할 수 있는
//employee란 구조체를 정의해보자
//employee변수를 선언한 다음 사용자가 입력하는 정보로 이 변수를 채우고 출력해보자
#include <stdio.h>

struct employee
{
    char name[20];
    char Idnum[20];
    int pay;
};

int main()
{
    struct employee man;

    printf("이름: "); scanf("%s", man.name);
    printf("주민등록번호: "); scanf("%s", man.Idnum);
    printf("급여 정보: "); scanf("%d", &man.pay);

    printf("이름: %s\n", man.name);
    printf("주민등록번호: %s\n", man.Idnum);
    printf("급여 정보: %d\n", man.pay);
}