#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"
#pragma warning(disable:4996)

NameCard* MakeNameCard(char* name, char* phone) 
{
	//NameCard 구조체 변수의 동적 할당 및 초기화 후 주소 값 반환
	NameCard* pNC = (NameCard*)malloc(sizeof(NameCard));

	strcpy(pNC->name, name);
	strcpy(pNC->phone, phone);

	return pNC;
}

void ShowNameCardInfo(NameCard* pcard)
{
	//NameCard 구조체 변수의 정보 출력
	printf("Name : %s\n", pcard->name);
	printf("Phone : % s\n\n", pcard->phone);
}

int NameCompare(NameCard* pcard, char* name)
{
	//이름이 같으면 0, 다르면 0이 아닌 값 반환
	return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard* pcard, char* phone)
{
	//전화번호 정보를 변경
	strcpy(pcard->phone, phone);
}
