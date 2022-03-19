//#define
#include<stdio.h>

#define NAME "홍길동"
#define AGE 24
#define PRINT_ADDR puts("주소: 경기도 용인시\n")

#define SQUARE(X) X*X
 
int main()
{
    // printf("이름: %s\n", NAME);
    // printf("나이: %d\n", AGE);
    // PRINT_ADDR;

    int num = 20;
    printf("Square of num : %d\n", SQUARE(num));
    printf("Square of -5: %d\n", SQUARE(-5));
    printf("Square of 2.5 : %d\n", SQUARE(2.5));

    printf("Square of 3+2 : %d\n", SQUARE(3+2));
    printf("Square of 3+2 : %d\n", SQUARE((3+2)));
}