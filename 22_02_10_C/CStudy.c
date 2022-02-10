//문자열 출력 함수
#include <stdio.h>

int main()
{
    char * str = "Simple String";

    printf("1. puts test ------ \n");
    puts(str);
    puts("So Simple String");

    printf("2. fputs test ------ \n");
    fputs(str, stdout); printf("\n");
    fputs("So Simple String", stdout); printf("\n");

    printf("3. end of main ------\n");

    // char str1[7];
    // int i;

    // for(i = 0; i< 3; i++)
    // {
    //     fgets(str1, sizeof(str1), stdin);
    //     printf("Read %d: %s \n", i+1, str1);
    // }
    //입력 12345678901234567890
    //출력 1번 123456(6글자씩 끊어서)
    //출력 2번 789012
    //출력 3번 345678

    char str2[7];
    int ii;

    for(ii = 0; ii< 3; ii++)
    {
        fgets(str2, sizeof(str2), stdin);
        printf("Read %d: %s \n", ii+1, str2);
    }
    // We
    // Read 1: We
 
    // like
    // Read 2: like
 
    // you
    // Read 3: you
    //------------------
    // Y & I
    // Read 1: Y & I
    
    // ha ha
    // Read 2: ha ha
    
    // ^^ --
    // Read 3: ^^ --
}