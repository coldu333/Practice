//void 포인터
#include <stdio.h>

void SoSimpleFunc(void)
{
    printf("I'm so simple");
}

int main()
{
    int num = 20;
    void * ptr;

    ptr = &num;
    printf("%p \n", ptr); //0x7ffee744a69c 

    ptr = SoSimpleFunc;
    printf("%p \n", ptr); //0x1087b8f00 

}