//문제 1
//int * maxPtr;
//int * minPtr;
//int arr[5]; 를 선언한다.
//MaxAndMin이란 함수를 정의하고 이를 호출하면서 배열과 두 포인터 변수에 대한 정보를 전달하자.
//maxPtr에는 배열의 가장 큰 값이 minPtr에는 가장 작은 값의 주소값이 저장되어야 한다.
#include <stdio.h>

void MaxAndMin(int** maxPtr, int** minPtr, int* arr)
{
    for(int i = 0; i<5; i++)
    {
        int *max, *min;
        max = min = &arr[0];

        if(*max < arr[i])
            max = &arr[i];

        if(*min > arr[i])
            min = &arr[i];

        *maxPtr = max;
        *minPtr = min;
    }
}

int main()
{
    int* maxPtr;
    int* minPtr;
    int arr[5] = {0};

    printf("5개의 정수를 입력하세요\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d번 정수 : ", i+1);
        scanf("%d", &arr[i]);
    }

    MaxAndMin(&maxPtr, &minPtr, arr);
    printf("Max : %d \nMin : %d\n", *maxPtr, *minPtr);
}