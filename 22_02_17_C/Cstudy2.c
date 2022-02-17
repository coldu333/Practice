//typedef 선언
#include <stdio.h>

typedef int INT;
typedef int* PTR_INT;

typedef unsigned int UINT;
typedef unsigned int *PTR_UNIT;

typedef unsigned char UCHAR;
typedef unsigned char *PTR_UCHAR;

struct point
{
    int xpos;
    int ypos;
};
typedef struct point Point;//Point가 struct point의 새 이름이 된다.

typedef struct person
{
    char name[20];
    char phoneNum[20];
    int age;
}Person;


int main()
{
    INT num1 = 120;
    PTR_INT pnum1 = &num1;

    UINT num2 = 190;
    PTR_UNIT pnum2 = &num2;

    UCHAR ch = 'Z';
    PTR_UCHAR pch = &ch;

    printf("%d %u %c \n", *pnum1, *pnum2, *pch);

    Point pos = {10, 20};
    Person man = {"이승기", "010-1212-0001", 21};
    printf("%d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %d \n", man.name, man.phoneNum, man.age);
}

// typedef struct 
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// }Person;


