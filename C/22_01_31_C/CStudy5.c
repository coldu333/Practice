//문제 3
//성적관리 프로그램을 작성하자.
//국어 영어 수학 국사 
//철희 철수 영희 영수
//성적을 입력받고
//개인별 총점과 과목별 총점을 계산해서 저장하고 출력하자.
#include <stdio.h>

int main()
{
    int arr[5][5] = {0};
    char name[5][128] = { "철희", "철수", "영희", "영수", "총점"};
    char sub[5][128] = {"국어", "영어", "수학", "국사", "총점"};

    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            printf("%s의 %s점수를 입력해주세요 : ", name[i], sub[j]);
            scanf("%d", &arr[i][j]);

            arr[i][4] += arr[i][j];//개인 별 총점
            arr[4][j] += arr[i][j];
        }
        printf("\n");
        arr[4][4] += arr[i][4];
    }

    for(int i = 0; i<5; i++)
    {
        printf("%s", name[i]);
        for(int j = 0; j<5; j++)
        {
            printf("%s(%d) ", sub[i], arr[i][j]);
        }
        printf("\n");
    }
}