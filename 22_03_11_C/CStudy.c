//문제1
//도서관리용 프로그램
//[제목, 저자명, 페이지수]에 대한 정보를 저장할 수 있는 구조체를 정의하고
//구조체 배열을 선언해 도서에 대한 정보를 저장하는 구조로 작성해보자
//main함수에서 3권의 도서에 대한 정보를 입력받고 입력이 끝나면 도서에 대한 내용을 출력해주자
#include<stdio.h>

typedef struct
{
    char Title[64];
    char Author[64];
    int Page;
}BOOK;


int main()
{
    BOOK BookList[3];

    for(int i = 0; i<3; i++)
    {   
        printf("\n%d번 책\n", i+1);
        printf("제목 : ");
        gets(BookList[i].Title);

        printf("저자명 : ");
        gets(BookList[i].Author);

        printf("페이지수 : ");
        scanf("%d", &BookList[i].Page);
        while(getchar()!='\n');
    }

    for(int i = 0; i<3; i++)
    {
        printf("\n%d번\n제목 : %s\n저자명 : %s\n페이지수 : %dP", i+1, 
        BookList[i].Title, BookList[i].Author, BookList[i].Page);
    }

    printf("\n");
}