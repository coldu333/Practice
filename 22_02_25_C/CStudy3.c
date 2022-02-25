//문제1
//프로그램상에서 mystory.txt라는 파일 이름을 생성해 본인의 이름, 주민번호, 전화번호를 저장하는 프로그램을 작성하자
//저장의 형태는 다음과 같다.
//#이름 : 윤성우
//#주민번호 : 
//#전화번호 :
#include<stdio.h>

int main()
{
    FILE * fp = fopen("mystory.txt", "wt");

    char name[20];
    char ID[20];
    char PhoneNum[20];

    printf("이름을 입력하세요\n");
    scanf("%s", name);

    fputs("#이름 : ", fp);
    fputs(name, fp);

    printf("주민번호를 입력하세요\n");
    scanf("%s", ID);

    fputs("\n#주민번호 : ", fp);
    fputs(ID, fp);

    printf("전화번호를 입력하세요\n");
    scanf("%s", PhoneNum);

    fputs("\n#전화번호 : ", fp);
    fputs(PhoneNum, fp);

    fclose(fp);
}