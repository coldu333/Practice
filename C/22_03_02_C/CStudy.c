//문제1
//프로그램 사용자로부터 정수를 입력받는다.
//-1이 입력될 때까지 계속해서 입력 받아서
//프로그램 종료 직전에 입력 받은 정수 전부를 순서대로 출력하는 프로그램을 작성해보자
//프로그램 사용자가 몇개를 입력할지 모른다.
//길이가 5인 int형 배열을 동적 할당해 꽉 찰 때마다 3씩 길이를 늘린다.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 5;
    int * NumList = (int*)malloc(sizeof(int)*size);
    int idx = 0;

    while(1)
    {   
        if(idx == 4 || (idx-5)%3 == 0 && idx > 2)
        {
            size+=3;
            NumList = (int*)realloc(NumList, size);
        }

        printf("정수를 입력하세요 : ");
        scanf("%d", &NumList[idx]);

        if(NumList[idx] == -1)
            break;

        idx++;
    }

    for(int i = 0; i<idx; i++)
        printf("%d\n", NumList[i]);
}