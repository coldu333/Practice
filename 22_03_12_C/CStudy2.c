//문제2
//두 개의 텍스트 파일이 같은지 다른지 확인하는 프로그램을 작성해보자.
//단순히 공백문자 하나가 차이를 보여도 두 텍스트 파일은 다른 것으로 판별이 나야한다.
#include <stdio.h>

void CompareFile(FILE* a, FILE* b)
{
    char origin, compare;

    while(1)
    {
        if(feof(a)!= 0 && feof(b)!= 0)
            break;
        
        origin = fgetc(a);
        compare = fgetc(b);

        if(origin != compare)
        {
            printf("일치하지 않습니다.\n");
            return;
        }
    }

    printf("일치합니다.\n");
}

int main()
{
    FILE *Text_1 = fopen("text.txt", "rt");
    FILE *Text_2 = fopen("text2.txt", "rt");
    FILE *Text_3 = fopen("text3.txt", "rt");

    printf("text1과 text2는 ");
    CompareFile(Text_1, Text_2);

    printf("text1과 text3는 ");
    CompareFile(Text_1, Text_3);

    fclose(Text_1);
    fclose(Text_2);
    fclose(Text_3);
}