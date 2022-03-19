//문제2
//배열에 저장되어 있는 요소들을 내림차순으로 정렬하는 함수를 정의하자
//함수이름은 DesSort이다.
//배열의 길이는 7인 int형 배열을 선언해서 프로그램 사용자로부터 7개의 정수를 입력 받도록 하자.
//입력과 출력이 가능하도록 메인함수를 작성하자
#include<stdio.h>

void DesSort(int* arr)
{
    int temp = 0;
    for(int j = 0; j<6; j++)
    {
        for(int i = 0; i<6; i++)
        {
            if(arr[i] < arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    
}

int main()
{
    int arr[7] = {0};

    printf("7개의 정수를 입력하세요\n");
    for(int i = 0; i<7; i++)
    {
        printf("%d번 정수 : ", i+1);
        scanf("%d", &arr[i]);
    }

    DesSort(arr);

    for(int i = 0; i<7; i++)
    {
        printf("%d ", arr[i]);
    }
}