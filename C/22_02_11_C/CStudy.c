//strlen, strcpy, strncp
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
    int len = strlen(str);
    str[len-1] = 0;
}

int main()
{
    char str[100];
    // printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);
    printf("길이: %d, 내용: %s \n", strlen(str), str);

    RemoveBSN(str);
    printf("길이: %d, 내용: %s \n", strlen(str), str);

    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];

    /**** case 1 ****/
    strcpy(str2, str1); //str1을 str2에 복사
    puts(str2); //출력

    /**** case 2 ****/
    strncpy(str3, str1, sizeof(str3)); //str1을 str3에 복사
    puts(str3); //출력 //길이만큼 출력이 되지 않은 이유 1) strncpy는 널문자 이전까지만 복사한다.
 
    /**** case 1 ****/
    strncpy(str3, str1, sizeof(str3)-1); //str1을 str3에 복사
    str3[sizeof(str3-1)] = 0; //널문자만큼의 공간을 빼준 후, 널문자를 삽입해줘야 한다.
    puts(str3); //출력
}