//문제 1
//3천 5백원으로 잔돈을 남기지 않고 
//크림빵(500원), 새우깡(700원), 콜라(400원)을 하나 이상 반드시 구매하는 
//모든 경우의 수를 출력하시오.
#include <stdio.h>

int main()
{
    int Bcount = 1, Scount = 1, Dcount = 1;

    printf("현재 당신이 소유하고 있는 금액 : 3500\n");

    for(Bcount = 1; Bcount < 7; Bcount++)
    {
        for(Scount = 1; Scount < 5; Scount++)
        {
            for(Dcount = 1; Dcount < 9; Dcount++)
                if(Bcount*500 + Scount*700 + Dcount*400 == 3500)
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", Bcount, Scount, Dcount);
        }
    }

    printf("어떻게 구입하시겠습니까?\n");
}