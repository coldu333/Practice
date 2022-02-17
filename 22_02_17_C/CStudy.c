//구조체 포인터
#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
    struct point *ptr;
};

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main()
{
    struct point pos = {10,20};
    struct person man ={"이승기", "010-1212-0001", 21};

    printf("%p %p \n", &pos, &pos.xpos); //0x7ffeede93658 0x7ffeede93658 
    printf("%p %p \n", &man, &man.name); //0x7ffeede93668 0x7ffeede93668 
}