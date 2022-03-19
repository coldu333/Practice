//문제 2
//섭씨 온도를 입력하면 화씨 온도를 반환하는 CelToFah 함수
//화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel 함수를 정의하고 호출하시오.
//Fah = 1.8*Cel+32
#include <stdio.h>

float CelToFah(float Cel)
{
    float Fah;
    Fah = 1.8f*Cel+32;
    return Fah;
}

float FahToCel(float Fah)
{
    float Cel;
    Cel = (Fah-32)/1.8f;
    return Cel;
}

int main()
{
    int Sel = 0;
    float Temp = 0;
    printf("1. 섭씨를 화씨로 변환 2. 화씨를 섭씨로 변환 : ");
    scanf("%d", &Sel);
    printf("\n온도를 입력하세요 : ");
    scanf("%f", &Temp);

    if(Sel == 1)
        printf("\n섭씨 %.2f도는 화씨 %.2f도입니다.\n", Temp, CelToFah(Temp));
    else if(Sel == 2)
        printf("\n화씨 %.2f도는 섭씨 %.2f도입니다.\n", Temp, FahToCel(Temp));
}