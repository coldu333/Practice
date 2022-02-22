//공용체 VS 구조체
#include <stdio.h>

typedef struct sbox
{
    int mem1;
    int mem2;
    double mem3;
} SBox;

typedef union ubox
{
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main()
{
    SBox sbx;
    UBox ubx;
    printf("%p %p %p\n", &sbx.mem1, &sbx.mem2, &sbx.mem3); //0x7ffee71c5690 0x7ffee71c5694 0x7ffee71c5698
    printf("%p %p %p\n", &ubx.mem1, &ubx.mem2, &ubx.mem3); //0x7ffee71c5688 0x7ffee71c5688 0x7ffee71c5688
    //공용체는 멤버들이 메모리 공간을 공유하고 있다.
    printf("%d %d \n", sizeof(SBox), sizeof(UBox)); //16 8
    //SBox 4+4+8 = 16
    //UBox = double(8)
}