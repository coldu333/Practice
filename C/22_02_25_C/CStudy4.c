//문제2
//문제 1에서 작성한 파일에 데이터를 추가하자
//즐겨먹는 음식과 취미를 입력하자
//#즐겨먹는 음식 : 짬뽕, 탕수육
//#취미 : 축구
#include<stdio.h>

int main()
{
    FILE *fp = fopen("mystory.txt", "at");

    char Food[40];
    char Hobby[40];

    printf("즐겨먹는 음식을 입력하세요\n");
    fgets(Food, sizeof(Food), stdin);
    fputs("#즐겨먹는 음식 : ", fp);
    fputs(Food, fp);

    printf("취미를 입력하세요\n");
    fgets(Hobby, sizeof(Hobby), stdin);
    fputs("#취미 : ", fp);
    fputs(Hobby, fp);

    fclose(fp);
}