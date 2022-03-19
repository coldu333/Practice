//배열의 포인터 연산
#include <stdio.h>

int main()
{
    int arr1[3][2];
    int arr2[2][3];

    printf("arr1 : %p \n", arr1); //0x7ffedfcae680
    printf("arr1+1 : %p \n", arr1+1); //0x7ffedfcae688
    printf("arr1+2 : %p \n", arr1+2); //0x7ffedfcae690

    printf("arr2 : %p\n", arr2); //0x7ffedfcae660
    printf("arr2+1 : %p\n", arr2 +1); //0x7ffedfcae66c
}