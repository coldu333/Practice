#include <stdio.h>
#include "ArrayList.h"

//1. ����Ʈ�� ���� �� �ʱ�ȭ �� ����, ���� 1���� 9���� ����Ʈ�� �����Ѵ�.
//2. ����Ʈ�� ����� ���� ���������� �����Ͽ� �� ���� ����Ͽ� ����Ѵ�.
//3. ����Ʈ�� ����� �� �� 2�� ����� 3�� ����� �ش��ϴ� ���� ��� �����Ѵ�.
//4. ���������� ����Ʈ�� ����� ���� ����Ѵ�.

int main()
{
	List list;
	int sum = 0;
	int data;

	Listinit(&list); // ����Ʈ ����
	
	for (int i = 1; i < 10; i++)
		LInsert(&list, i);       //����Ʈ ����

	if (LFirst(&list, &data)) //��
	{
		sum = data;
		while (LNext(&list, &data))
			sum += data;
	}

	printf("%d\n", sum); //���

	if (LFirst(&list, &data)) //����
	{
		if (data % 2 == 0 || data % 3 == 0)
			LRemove(&list);

		while (LNext(&list, &data))
		{
			if (data % 2 == 0 || data % 3 == 0)
				LRemove(&list);
		}
	}

	if (LFirst(&list, &data)) //����
	{
		printf("%d ", data);
		while (LNext(&list, &data))
			printf("%d ", data);
	}
}