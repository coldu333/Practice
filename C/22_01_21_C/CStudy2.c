//문제 1
//길이가 5인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5로 초기화
//배열의 첫번째 요소를 가르키는 포인터 변수 ptr 선언
//모든 배열 요소를 2만큼 증가시키고 출력하시오.
#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;

    for(int i = 0; i<5; i++)
    {
        ptr[i] += 2;
        printf("%d번째 : %d\n", i+1, arr[i]);
    }
}