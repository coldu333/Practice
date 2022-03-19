#include <stdio.h>

void SimpleFuncOne(int* arr3, int* arr4){}
void SimpleFuncTwo(int(*arr5)[4], int(*arr6)[4]){}

void ComplexFuncOne(int** arr7, int*(*arr8)[5]){}
void ComplexFuncTwo(int*** arr9, int*** (*arr10)[5]){}

int main()
{
    //문제 1
    //int* arr1[5]의 ??? = arr1
    //int* arr2[3][5]의 ??? = arr2
    //???를 구하시오
    int* arr1[1][5];
    int* arr2[3][5];

    int** ptr = arr1;
    int* *(ptr2)[5] = arr2;

    //문제 2
    //void SimpleFuncOne(???, ???){}의 매개변수 선언
    //void SimpleFuncTwo(???, ???){}의 매개변수 선언
    int arr3[3];
    int arr4[4];
    int arr5[3][4];
    int arr6[2][4];

    SimpleFuncOne(arr3, arr4);
    SimpleFuncTwo(arr5, arr6);

    //문제 3
    //void ComplexFuncOne(???, ???){}
    //void ComplexFuncTwo(???, ???){}
    int* arr7[3];
    int* arr8[3][5];
    int** arr9[3];
    int*** arr10[3][5];

    ComplexFuncOne(arr7, arr8);
    ComplexFuncTwo(arr9, arr10);

    //문제 4
    int arr11[3][2] = {{1,2},{3,4},{5,6}};
    //1) arr[1][0]는? 3
    //2) arr[0][1]은? 2
    //3) *(arr[2]+1)은? 6
    //4) *(arr[1]+1)은? 4
    //5) (*(arr+2))[0]은? 5
    //6) (*(arr+0))[1]은? 2
    //7) **arr은? 1
    //8) *(*(arr+0)+0)은? 1

    //문제 5 arr[1][0][1]을 대체할 수 있는 표현방식 5개를 적어보자
    int arr[2][2][2] = {1,2,3,4,5,6,7,8};
    //1) (*(arr+1))[0][1]
    //2) (*(arr[1]+0))[1]
    //3) (*(*(arr+1)+0))[1]
    //4) *(*(arr[1]+0)+1)
    //5) *(*(*(arr+1)+0)+1)
    //6) *(arr[1][0]+1)
    
}