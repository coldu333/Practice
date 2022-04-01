#include <stdio.h>
#include "ArrayList.h"

//1. 리스트를 생성 및 초기화 한 다음, 정수 1부터 9까지 리스트에 저장한다.
//2. 리스트에 저장된 값을 순차적으로 참조하여 그 합을 계산하여 출력한다.
//3. 리스트에 저장된 값 중 2의 배수와 3의 배수에 해당하는 값을 모두 삭제한다.
//4. 마지막으로 리스트에 저장된 값을 출력한다.

int main()
{
	List list;
	int sum = 0;
	int data;

	Listinit(&list); // 리스트 생성
	
	for (int i = 1; i < 10; i++)
		LInsert(&list, i);       //리스트 저장

	if (LFirst(&list, &data)) //합
	{
		sum = data;
		while (LNext(&list, &data))
			sum += data;
	}

	printf("%d\n", sum); //출력

	if (LFirst(&list, &data)) //삭제
	{
		if (data % 2 == 0 || data % 3 == 0)
			LRemove(&list);

		while (LNext(&list, &data))
		{
			if (data % 2 == 0 || data % 3 == 0)
				LRemove(&list);
		}
	}

	if (LFirst(&list, &data)) //삭제
	{
		printf("%d ", data);
		while (LNext(&list, &data))
			printf("%d ", data);
	}
}