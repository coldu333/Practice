//문제 4
//길이가 6인 int형 배열 arr을 선언하고
//1, 2, 3, 4, 5, 6으로 초기화
//배열에 저장된 값의 순서가 역순이 되도록 변경하시오
//단, 배열의 앞 뒤를 가르키는 포인터 변수 두개를 선언해서 이를 활용하시오.
#include <stdio.h>

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int* ptr1 = arr;
    int* ptr2 = &arr[5];
    int temp = 0;

    for(int i = 0; i<3; i++)
    {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }

    for(int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}