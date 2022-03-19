//문제 3
//가위바위보 게임을 만들어보자
//사용자로부터 가위 바위 보 중 하나를 입력받는다.
//컴퓨터는 난수를 생성해 가위 바위 보 중 하나를 선택하게 간다.
//이 둘을 비교해 승패를 가려주는 프로그램을 작성해 보자
//단, 사용자가 지면 게임이 끝나고 게임의 결과를 출력해줘야 한다.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Sel = 0, CSel = 0;
    char Menu[3][128] = {"바위", "가위", "보"}; 
    char Result[3][128] = {"이겼습니다!\n", "비겼습니다!\n", "졌습니다!\n"};
    int win = 0, tie = 0;
    srand((int)time(NULL));

    while(1)
    {
        printf("바위 1, 가위 2, 보 3 : ");
        scanf("%d", &Sel);
        CSel = (rand()%3) + 1;

        printf("나 : %s VS 컴퓨터 : %s, 당신은(이) ", Menu[Sel-1], Menu[CSel-1]);

        if(Sel == 1)
        {
            if(CSel == 2)
            {
                printf("%s", Result[0]);
                win ++;
            }
            else if(CSel == 1)
            {
                printf("%s", Result[1]);
                tie ++;
            }
            else if(CSel == 3)
            {
                printf("%s", Result[2]);
                break;
            }
                
        }
        else if(Sel == 2)
        {
            if(CSel == 3)
            {
                printf("%s", Result[0]);
                win ++;
            }
            else if(CSel == 2)
            {
                printf("%s", Result[1]);
                tie ++;
            }
            else if(CSel == 1)
            {
                printf("%s", Result[2]);
                break;
            } 

        }
        else if(Sel == 3)
        {
            if(CSel == 1)
            {
                printf("%s", Result[0]);
                win ++;
            }
            else if(CSel == 3)
            {
                printf("%s", Result[1]);
                tie ++;
            }
            else if(CSel == 2)
            {
                printf("%s", Result[2]);
                break;
            }
                
        }
        else
        {
            printf("다시 입력해주세요.\n");
        }
    }

    printf("게임 결과 : %d승 %d무\n", win, tie);
}