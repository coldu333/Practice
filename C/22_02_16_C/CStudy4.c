//문제 1
//문자열 형태의 종업원 이름, 문자열 형태의 주민등록번호, 정수 형태의 급여정보를 저장할 수 있는
//employee란 구조체를 정의해보자
//길이가 3인 employee 구조체 배열을 만들고 사용자가 값을 입력하면 순서대로 출력하도록 하자.
#include<stdio.h>

struct employee
{
    char name[20];
    char idNum[20];
    int pay;
};

int main()
{
    struct employee arr[3];

    for(int i=0; i<3; i++)
    {
        printf("이름: "); scanf("%s", arr[i].name);
        printf("주민등록번호: "); scanf("%s", arr[i].idNum);
        printf("급여정보: "); scanf("%d", &arr[i].pay);
        printf("\n");
    }

    for(int i=0; i<3; i++)
        printf("이름: %s, 주민번호: %s, 급여정보: %d\n", arr[i].name, arr[i].idNum, arr[i].pay);
}