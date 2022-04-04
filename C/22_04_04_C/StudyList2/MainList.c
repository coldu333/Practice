#include "ArrayList.h"
#include "NameCard.h"

//1. 총 3명의 전화번호 정보를 리스트에 저장한다.
//2. 특정 이름을 대상으로 탐색을 진행 후 그 사람의 정보를 출력한다.
//3. 특정 이름을 대상으로 탐색을 진행 후 그 사람의 전화번호를 변경한다.
//4. 특정 이름을 대상으로 탐색을 진행 후 그 사람의 정보를 삭제한다.
//4. 남아있는 모든 사람의 전화번호 정보를 출력한다.

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
		printf("이름: ");  gets(pNC->name);
		printf("전화번호: ");  gets(pNC->phone);
		LInsert(&list, MakeNameCard(pNC->name, pNC->phone));
	}
	
	printf("검색할 이름을 입력해주세요: ");
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

	printf("전화번호를 변경할 이름을 입력해주세요 : ");
	gets(Name);

	if (LFirst(&list, &pNC))
	{
		printf("전화번호 입력: ");
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

	printf("삭제하실 이름을 입력해주세요.");
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

	printf("<전화번호부>\n");
	if (LFirst(&list, &pNC))
	{
		ShowNameCardInfo(pNC);

		while (LNext(&list, &pNC))
			ShowNameCardInfo(pNC);
	}
	printf("\n");
}