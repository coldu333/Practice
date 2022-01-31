//문제 2
//배열 A의 값을 이용하여 배열 B의 값을 초기화해라
#include <stdio.h>

int main()
{
    int arr1[2][4] = {1,2,3,4,5,6,7,8};
    int arr2[4][2];
    int row = 0, col = 0;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j<4; j++)
        {
            arr2[row][col] = arr1[i][j];
            col++;
            if(col%2 == 0)
            {
                row++;
                col = 0;
            }

            if(row > 4)
                break;
        }
    }

    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("arr2[%d][%d] = %d ", i, j, arr2[i][j]);
        }
        printf("\n");
    }

}