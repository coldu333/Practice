//문제1
//달팽이 배열을 만들어서 출력하는 프로그램을 작성하고자 한다.
//프로그램 사용자로부터 하나의 정수n를 받아 n*n길이의 배열을 출력하자.
#include <stdio.h>

int main()
{
    int n, count = 0;
    int line = 0, cycle = 0;
    printf("하나의 정수를 입력하세요 : ");
    scanf("%d", &n);

    int arr[n][n];
    
    for(cycle = 0; cycle<n/2; cycle++)
    {
        for(int i = cycle; i<n-cycle; i++)
        {
            count++;
            arr[cycle][i] = count;  
        }    
        for(int i = 1+cycle; i<n-cycle; i++)
        {
            count++;
            arr[i][n-(1+cycle)] = count;
        }
        for(int i = n-(2+cycle); i >= 0 + cycle; i--)
        {
            count++;
            arr[n-(1+cycle)][i] = count;
        }
        for(int i = n-(2+cycle); i>=1+cycle; i--)
        {
            count++;
            arr[i][cycle] = count;
        }   
    }
    
    if(n%2 == 1)
        arr[(int)(n/2)][(int)(n/2)] = n*n;
        
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}