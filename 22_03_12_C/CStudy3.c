//문제3
//전화번호 관리 프로그램을 작성해보자
//필요 기능
//입력: 이름과 전화번호 입력
//삭제: 이름을 입력하여 해당 이름의 정보 삭제
//검색: 이름을 입력하여 해당 이름의 정보 출력
//전체출력: 저장된 모든 이름과 전화번호를 출력
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char name[32];
    char phoneNum[32];
}Phone;

int AddList(Phone*PhoneList, int size)
{
    size++;
    PhoneList = (Phone*)realloc(PhoneList, sizeof(Phone)*(1+size));

    printf("\n[입력]\n");
    printf("이름 : "); scanf("%s", PhoneList[size].name);
    printf("전화번호 : "); scanf("%s", PhoneList[size].phoneNum);

    return size;
}

int DelList(Phone*PhoneList, int size)
{
    char tempName[32] = {"\0"};

    printf("\n[삭제]\n");
    printf("삭제할 이름 : "); scanf("%s", tempName);
    
    for(int i=0; i<=size+1; i++)
    {   
        if(strcmp(tempName, PhoneList[i].name)==0)
        {
            PhoneList[i] = PhoneList[size];
            size--;
            PhoneList = (Phone*)realloc(PhoneList, sizeof(Phone)*(1+size));
            printf("성공적으로 삭제했습니다.\n");
            return size;
        }
    }
    
    printf("이름을 찾을 수 없습니다.\n");
    return size;
}

void SearchList(Phone*PhoneList, int size)
{
    char tempName[32];

    printf("\n[검색]\n");
    printf("검색할 이름 : "); scanf("%s", tempName);
            
    for(int i=0; i<=size+1; i++)
    {   
        if(strcmp(tempName, PhoneList[i].name)==0)
        {
            printf("Name: %s    Tel: %s\n", PhoneList[i].name, PhoneList[i].phoneNum);
            return;
        }
    }

    printf("이름을 찾을 수 없습니다.\n");
}

void PrintList(Phone*PhoneList, int size)
{   
    printf("\n[출력]\n");
    for(int i=0; i<=size; i++)
        printf("Name: %s    Tel: %s\n", PhoneList[i].name, PhoneList[i].phoneNum);
}

int main()
{
    Phone *PhoneList = (Phone*)malloc(sizeof(Phone));
    int Sel = 0;
    int size = -1;

    while(1)
    {
        printf("\n***** MENU *****\n");
        printf("1.입력\n2.삭제\n3.검색\n4.전체출력\n5.종료\n");
        printf("원하시는 메뉴의 숫자를 입력해주세요 : ");
        scanf("%d", &Sel);

        if(Sel == 1)
        {
            size = AddList(PhoneList, size);
        }
        else if(Sel == 2)
        {
            size = DelList(PhoneList, size);
        }
        else if(Sel == 3)
        {    
            SearchList(PhoneList, size);
        }
        else if(Sel == 4)
        {
            PrintList(PhoneList, size);
        }
        else if(Sel == 5)
        {
            free(PhoneList);
            return 0;
        }
        else
            printf("잘못된 입력입니다. 다시 입력해주세요");
    }

    free(PhoneList);
}
//오류: 삭제 및 검색 기능 X