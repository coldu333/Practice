//동적 할당
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1 = (int*)malloc(sizeof(int)); //4바이트 크기의 int형 메모리 주소
    int *ptr2 = (int*)malloc(sizeof(int)*7); //int형 변수 7개 크기의 메모리 주소
    int i;

    *ptr1 = 20;
    for(i=0; i<7; i++)
        ptr2[i] = i+1;

    printf("%d \n", *ptr1);
    for(i=0; i<7; i++)
        printf("%d ", ptr2[i]);

    free(ptr1);
    free(ptr2);
}