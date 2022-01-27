//문제 1
//길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받는다.
//단, 입력받는 숫자가 홀수이면 배열의 앞부터 채워 나가고
//짝수이면 뒤에서부터 채워나가는 형식을 취하기로 하자.
#include <stdio.h>

int main()
{
    int num[10] = {0};
    int arr[10] = {0};
    int temp = 0;
    int OIdx = 0;
    int EIdx = 9;

    printf("10개의 정수를 입력하세요.\n");
    for(int i = 0; i<10; i++)
    {
        printf("%d번 정수 : ", i+1);
        scanf("%d",&num[i]);
    }


    for(int i = 0; i<9; i++) // 오름차순 정리
    {
        for(int j = 0; j<9; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    
    for(int i = 0; i<10; i++) //홀수를 앞으로
    {
        if(num[i]%2 == 1)
        {
            arr[OIdx] = num[i];
            OIdx++;
        }
        else
        {
            arr[EIdx] = num[i];
            EIdx --;
        }
    }

    printf("\n");
    for(int i = 0; i<10; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}