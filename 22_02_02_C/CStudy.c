//2차원배열의 주소
#include <stdio.h>

int main()
{
    int arr2d[3][3];
    printf("%d \n", arr2d); //-417257872 
    printf("%d \n", arr2d[0]); //-417257872 
    printf("%d \n \n", &arr2d[0][0]); //-417257872 

    printf("%d \n", arr2d[1]); //-417257860
    printf("%d \n\n", &arr2d[1][0]); //-417257860

    printf("%d \n", arr2d[2]); //-417257848
    printf("%d \n\n", &arr2d[2][0]); //-417257848

    printf("sizeof(arr2d) : %d\n", sizeof(arr2d)); //36
    printf("sizeof(arr2d[0]) : %d\n", sizeof(arr2d[0])); //12
    printf("sizeof(arr2d[1]) : %d\n", sizeof(arr2d[1])); //12
    printf("sizeof(arr2d[2]) : %d\n", sizeof(arr2d[2])); //12
}