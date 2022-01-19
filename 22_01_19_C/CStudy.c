//문제 1
//길이가 5인 int형 배열을 선언해서 사용자로부터 5개의 정수를 입력받자
//입력된 정수 중 최댓값
//입력된 정수 중 최소값
//입력된 정수의 총 합
#include <stdio.h>

int main()
{
    int arr[5] = { 0 };
    int max = 0, min = 0, sum = 0;

    printf("다섯 개의 정수를 입력하세요.\n");

    for(int i = 0; i<5; i++)
    {
        printf("%d번째 정수 : ", i+1);
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for(int i = 0; i < 5; i++)
    {
        if(max < arr[i])
            max = arr[i];
        
        if(min > arr[i])
            min = arr[i];

        sum += arr[i];
    }

    printf("\n입력된 정수 중 최댓값 : %d\n입력된 정수 중 최솟값 : %d\n 입력된 정수의 총 합 : %d\n", max, min, sum);
}