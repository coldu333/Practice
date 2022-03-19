//문제 3
//길이가 5인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5로 초기화
//ptr을 감소시키는 방식으로 모든 배열 요소를 접근 후 더하여 결과 출력하시오.
#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int* ptr = &arr[4];
    int sum = 0;

    for(int i = 0; i<5; i++)
    {
        sum += *ptr;
        ptr--;
    }

    printf("%d\n", sum);
}