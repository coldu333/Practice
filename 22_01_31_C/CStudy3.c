//문제1
//가로의 길이가 9, 세로의 길이가 3인 int형 2차원 배열을 선언하여
//구구단 중 2단, 3단, 4단을 저장하고 출력해보자
#include <stdio.h>

int main()
{
    int arr[3][9];
    
    for(int i = 1; i<4; i++)
    {
        for(int j = 1; j<10; j++)
        {
            arr[i][j] = i*j;
            printf("%d x %d = %d\n", i, j, arr[i][j]);
        }
    }
}