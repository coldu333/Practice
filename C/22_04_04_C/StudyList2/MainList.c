#include "ArrayList.h"
#include "NameCard.h"

//1. �� 3���� ��ȭ��ȣ ������ ����Ʈ�� �����Ѵ�.
//2. Ư�� �̸��� ������� Ž���� ���� �� �� ����� ������ ����Ѵ�.
//3. Ư�� �̸��� ������� Ž���� ���� �� �� ����� ��ȭ��ȣ�� �����Ѵ�.
//4. Ư�� �̸��� ������� Ž���� ���� �� �� ����� ������ �����Ѵ�.
//4. �����ִ� ��� ����� ��ȭ��ȣ ������ ����Ѵ�.

int main()
{
	List list;
	NameCard* pNC;
	char Name[30];
	char Phone[30];

	Listinit(&list);

	for (int i = 0; i < 3; i++)
	{
		pNC = (NameCard*)malloc(sizeof(NameCard));
		printf("�̸�: ");  gets(pNC->name);
		printf("��ȭ��ȣ: ");  gets(pNC->phone);
		LInsert(&list, MakeNameCard(pNC->name, pNC->phone));
	}
	
	printf("�˻��� �̸��� �Է����ּ���: ");
	gets(Name);

	if (LFirst(&list, &pNC))
	{
		if (NameCompare(pNC, Name) == 0)
			ShowNameCardInfo(pNC);
		else
		{
			while (LNext(&list, &pNC))
			{
				if (NameCompare(pNC, Name) == 0)
				{
					ShowNameCardInfo(pNC);
					break;
				}
			}
		}
	}
	printf("\n");

	printf("��ȭ��ȣ�� ������ �̸��� �Է����ּ��� : ");
	gets(Name);

	if (LFirst(&list, &pNC))
	{
		printf("��ȭ��ȣ �Է�: ");
		if (NameCompare(pNC, Name) == 0)
		{
			gets(Phone);
			ChangePhoneNum(pNC, Phone);
		}
		else
		{
			while (LNext(&list, &pNC))
			{
				if (NameCompare(pNC, Name) == 0)
				{
					gets(Phone);
					ChangePhoneNum(pNC, Phone);
					break;
				}
			}
		}
	}
	printf("\n");

	printf("�����Ͻ� �̸��� �Է����ּ���.");
	gets(Name);

	if (LFirst(&list, &pNC))
	{
		if (NameCompare(pNC, Name) == 0)
		{
			pNC = LRemove(&list);
			free(pNC);
		}
		else
		{
			while (LNext(&list, &pNC))
			{
				if (NameCompare(pNC, Name) == 0)
				{
					pNC = LRemove(&list);
					free(pNC);
					break;
				}
			}
		}	
	}
	printf("\n");

	printf("<��ȭ��ȣ��>\n");
	if (LFirst(&list, &pNC))
	{
		ShowNameCardInfo(pNC);

		while (LNext(&list, &pNC))
			ShowNameCardInfo(pNC);
	}
	printf("\n");
}