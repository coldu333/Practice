//문제2
//포인터 변수 ptr에 저장된 값을 변경시키지 않고
//ptr을 대상으로 덧셈연산을 하여 
//모든 배열 요소를 2만큼 증가시키고 출력하시오.
#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;

    for(int i = 0; i<5; i++)
    {
        *(ptr + i) += 2;
        printf("%d번째 : %d\n", i+1, arr[i]);
    }
}