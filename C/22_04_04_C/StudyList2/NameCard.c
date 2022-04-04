#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"
#pragma warning(disable:4996)

NameCard* MakeNameCard(char* name, char* phone) 
{
	//NameCard ����ü ������ ���� �Ҵ� �� �ʱ�ȭ �� �ּ� �� ��ȯ
	NameCard* pNC = (NameCard*)malloc(sizeof(NameCard));

	strcpy(pNC->name, name);
	strcpy(pNC->phone, phone);

	return pNC;
}

void ShowNameCardInfo(NameCard* pcard)
{
	//NameCard ����ü ������ ���� ���
	printf("Name : %s\n", pcard->name);
	printf("Phone : % s\n\n", pcard->phone);
}

int NameCompare(NameCard* pcard, char* name)
{
	//�̸��� ������ 0, �ٸ��� 0�� �ƴ� �� ��ȯ
	return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard* pcard, char* phone)
{
	//��ȭ��ȣ ������ ����
	strcpy(pcard->phone, phone);
}
