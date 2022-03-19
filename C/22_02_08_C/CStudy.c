//문제1
//숫자 맞추기 게임
//컴퓨터에서 0 ~ 9사이의 숫자 중에서 서로 다른 세 개의 숫자를 부른다.
//사용자는 이것을 순서까지 정확히 맞춰야 한다.
//숫자와 순서가 일치하면 strike, 숫자만 같고 순서가 틀리다면 ball, 모두 틀리면 out.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Shuffle(int* Cnum)
{
    srand((int)time(NULL));

    for(int i=0; i<3; i++) //숫자 입력
        Cnum[i] = rand()%9;

    for(int i=0; i<2; i++)
    {
        if(Cnum[i] == Cnum[i+1])
        {
            Cnum[i] = rand()%9;
            continue;
        }
    }
}

int Result(int* Cnum, int* Unum)
{
    int Strike = 0, Ball = 0, Out = 0;
    for(int i = 0; i<3; i++)
    {
        if(Cnum[i] == Unum[i])
            Strike++;
        
        for(int j = 0; j<3; j++)
            if(Cnum[i] == Unum[j] && i!=j)
                Ball++;
    }

    if(Strike == 0 && Ball == 0)
            Out++;
    
    printf("%dStrike, %dBall\n", Strike, Ball);

    if(Strike == 3)
        return 1;
    
    return 0;
}

int main()
{
    int Cnum[3] = {0};
    int Unum[3] = {0};
    int idx = 0;
    
    Shuffle(Cnum);
    printf("Start Game!\n");
    
    while(1)
    {
        idx++;
        printf("3개의 숫자 선택: ");
        for(int i = 0; i<3; i++)
            scanf("%d", &Unum[i]);
        
        
        if(Unum[0] < 0 || Unum[0] > 9
        || Unum[1] < 0 || Unum[1] > 9
        || Unum[2] < 0 || Unum[2] > 9)
        {
            printf("0 ~ 9사이의 숫자를 입력해주세요.\n");
            idx--;
            continue;
        }

        if(Unum[0] == Unum[1] || Unum[0] == Unum[2] || Unum[1] == Unum[2])
        {
            printf("서로 다른 수를 입력해주세요.\n");
            idx--;
            continue;
        }      
    
        printf("%d번째 도전 결과: ", idx);
        if(Result(Cnum, Unum) == 1)
            break;   
    }

    printf("Game Over!\n");
}