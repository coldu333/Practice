//문제1
//전화번호 관리 프로그램을 작성해보자
//텍스트파일에 저장하고 그것을 출력하는 방식으로 하자.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE * fp;

typedef struct
{
    char name[32];
    char phoneNum[32];
}Phone;

void AddList()
{
    fp = fopen("PhoneBook.txt", "a+t");
    Phone temp;

    printf("\n[입력]\n");
    printf("이름 : "); scanf("%s", temp.name);
    printf("전화번호 : "); scanf("%s", temp.phoneNum);

    fprintf(fp, "\n%s %s", temp.name, temp.phoneNum);

    fclose(fp);
}

void DelList()
{
    fp = fopen("PhoneBook.txt", "rt");
    FILE * temp = fopen("temp.txt", "wt");
    char tempName[32];
    Phone tempPhone;

    printf("\n[삭제]\n");
    printf("삭제할 이름 : "); scanf("%s", tempName);

    while(1)
    {
        if(feof(fp)!=0)
            break;

        fscanf(fp, "%s", tempPhone.name);
        fscanf(fp, "%s", tempPhone.phoneNum);

        if(strcmp(tempName, tempPhone.name)!=0)
        {
            fprintf(temp, "\n%s ", tempPhone.name);
            fprintf(temp, "%s", tempPhone.phoneNum);
        }
    }
    fclose(fp);
    fclose(temp);

    fp = fopen("PhoneBook.txt", "wt");
    temp = fopen("temp.txt", "rt");
    char ch;

    while((ch=fgetc(temp))!=EOF)
        fputc(ch, fp);
    
    fclose(fp);
    fclose(temp);
}

void SearchList()
{
    char tempName[32];
    Phone phone;
    fp = fopen("PhoneBook.txt", "rt");

    printf("\n[검색]\n");
    printf("검색할 이름 : "); scanf("%s", tempName);

    while(1)
    {
        if(feof(fp)!=0)
            break;
        
        fscanf(fp, "%s", phone.name);

        if(strcmp(tempName, phone.name)==0)
        {
            fscanf(fp,"%s", phone.phoneNum);
            printf("Name: %s    Tel: %s\n", phone.name, phone.phoneNum);
            fclose(fp);
            return;
        }
    }
    printf("이름을 찾을 수 없습니다.\n");
    fclose(fp);
}

void PrintList()
{   
    char ch[32];
    printf("\n[출력]\n");
    fp = fopen("PhoneBook.txt", "rt");
    
    while(1)
    {
        if(feof(fp)!=0)
            break;

        printf("Name: "); 
        fscanf(fp, "%s", ch); printf("%s ", ch);
        printf("Tel: "); 
        fscanf(fp, "%s", ch); printf("%s\n", ch);
    }

    fclose(fp);
}

int main()
{
    int Sel = 0;

    while(1)
    {
        printf("\n***** MENU *****\n");
        printf("1.입력\n2.삭제\n3.검색\n4.전체출력\n5.종료\n");
        printf("원하시는 메뉴의 숫자를 입력해주세요 : ");
        scanf("%d", &Sel);

        if(Sel == 1)
        {
            AddList();
        }
        else if(Sel == 2)
        {
            DelList();
        }
        else if(Sel == 3)
        {    
            SearchList();
        }
        else if(Sel == 4)
        {
            PrintList();
        }
        else if(Sel == 5)
        {
            return 0;
        }
        else
            printf("잘못된 입력입니다. 다시 입력해주세요");
    }

}