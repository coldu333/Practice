//문제 1에서 구조체 배열을 선언하는 것이 아닌
//구조체 포인터 배열을 선언하고 
//구조체를 동적으로 할당하는 형태로 프로그램을 재구현하자
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char Title[64];
    char Author[64];
    int Page;
}BOOK;


int main()
{
    BOOK *BookList = (BOOK*)malloc(sizeof(BOOK)*3);

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

    free(BookList);
}