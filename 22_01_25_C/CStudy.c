//문제 1
//길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받아서
//홀수 짝수를 구분 지어 출력하는 프로그램을 작성해 보자
//일단 홀수부터 출력하고, 짝수를 출력하자
//단 정수는 main함수 내에서 입력 받도록 하고
//홀수만 출력하는 함수와 짝수만 출력하는 함수를 각각 정의해서 호출시키자.
#include<stdio.h>

void Odd(int* arr)
{
    for(int i = 0; i<10; i++)
    {
        if(arr[i]%2 == 1)
            printf("%d ", arr[i]);
    }
}

void Even(int* arr)
{
    for(int i = 0; i<10; i++)
    {
        if(arr[i]%2 == 0)
            printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[10] ={ 0 };

    printf("10개의 정수를 입력하시오\n");
    for(int i =0; i<10; i++)
    {
        printf("%d번 정수 : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n홀수 출력: "); Odd(arr);
    printf("\n짝수 출력: "); Even(arr);
    printf("\n");
}
