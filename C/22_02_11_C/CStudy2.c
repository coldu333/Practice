//strcat, strncat
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[20] = "First~";
    char str2[20] = "Second";

    char str3[20] = "Simple num: ";
    char str4[20] = "1234567890";

    /**** case 1 ****/
    strcat(str1, str2);
    puts(str1);

    /**** case 2 ****/
    strncat(str3, str4, 7);
    puts(str3);

    char str5[20];
    char str6[20];
    // printf("문자열 입력 1: ");
    // scanf("%s", str5);
    // printf("문자열 입력 2: ");
    // scanf("%s", str6);

    if(!strcmp(str1, str2)) //0은 false !0은 true
    {
        puts("두 문자열은 완벽히 동일합니다.");
    }
    else
    {
        puts("두 문자열은 동일하지 않습니다.");

        if(!strncmp(str1, str2, 3))
            puts("그러나 앞 세 글자는 동일합니다.");
    }

    char str7[20];
    printf("정수 입력: ");
    scanf("%s", str7);
    printf("%d \n", atoi(str7));

    printf("실수 입력: ");
    scanf("%s", str7);
    printf("%g \n", atof(str7));

}