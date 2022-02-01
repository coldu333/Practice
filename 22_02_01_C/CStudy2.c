//이중 포인터
#include <stdio.h>

void SwapIntPtr(int **dp1, int **dp2)
{
    int * temp = *dp1;
    *dp1 = *dp2;
    *dp2 = temp;
}

int main()
{
    double num = 3.14;
    double *ptr = &num; // num의 주소값을 참조
    double **dptr = &ptr; //ptr의 주소값을 참조
    double *ptr2;

    printf("%9p %9p \n", ptr, *dptr);
    printf("%9g %9g \n", num, **dptr);
    ptr2 = *dptr; // ptr2 = ptr
    *ptr2 = 10.99; // num = 10.99
    printf("%9g %9g \n", num, **dptr);

    //------------------------------------(Call-by-reference)
    int num1 = 10, num2 = 20;
    int *p1, *p2;
    p1 = &num1, p2 = &num2;
    printf("*p1 *p2 : %d %d \n", *p1, *p2);

    SwapIntPtr(&p1, &p2);
    printf("*p1 *p2 : %d %d \n", *p1, *p2);

    //------------------------------------(배열의 포인터 형)
    int n1 = 10, n2 = 20, n3 = 30;
    int *ptr11 = &n1;
    int *ptr22 = &n2;
    int *ptr33 = &n3;

    int * ptrArr[] = {ptr11, ptr22, ptr33};
    int ** dp = ptrArr;

    printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
    printf("%d %d %d \n", *(dp[0]), *(dp[1]), *(dp[2]));

}