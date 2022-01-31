//다차원 배열의 이해와 활용
#include <stdio.h>

int main(void)
{
    //sizeof 연산자를 이용해 2차원 배열의 크기를 계산하는 법
    int arr1[3][4];
    int arr2[7][9];
    printf("열3, 행4 : %d\n", sizeof(arr1));
    printf("열7, 행9 : %d\n", sizeof(arr2));

    //--------------------------------------------- 층별로 두 가구가 사는 4층 빌라의 가구별 거주인원 구하기
    int villa[4][2];
    int popu, i, j;

    //가구별 거주인원 입력
    for(i=0; i<4; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d층 %d호 인구수 : ", i+1, j+1);
            scanf("%d", &villa[i][j]);
        }
    }
    //층별 인구수 출력
    for(i=0; i<4; i++)
    {
        popu = 0;
        popu += villa[i][0];
        popu += villa[i][1];
        printf("%d층 인구수: %d \n", i+1, popu);
    }
    //--------------------------------------------- 층별로 두 가구가 사는 4층 빌라의 가구별 거주인원 구하기

    //2차원 배열의 주소 값
    int arr[3][2];
    int ii, jj;
    for(ii = 0; ii<3; ii++)
        for(jj = 0; jj<2; jj++)
            printf("%p \n", &arr[ii][jj]);
            
}