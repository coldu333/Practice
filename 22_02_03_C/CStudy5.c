//문제1
//길이가 4*4인 int형 2차원 배열을 선언하고
//배열의 요소들을 오른쪽 방향으로 90식 이동시켜 그 결과를 출력하는 프로그램을 작성해보자
#include <stdio.h>

void RotArr(int (*arr)[4])
{
    int euler[4][4] = {0};

    for(int i = 0; i<4; i++)
    {
        euler[i][3] = arr[0][i];
        euler[i][2] = arr[1][i];
        euler[i][1] = arr[2][i];
        euler[i][0] = arr[3][i];
    }
    
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            printf("%d ", euler[i][j]);
            arr[i][j] = euler[i][j];
        }
        printf("\n");
    }
}

int main()
{
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    printf("0도\n");
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    
    for(int i = 1; i<4; i++)
    {
        printf("\n%d도\n", 90*i);
        RotArr(arr);
    }

}