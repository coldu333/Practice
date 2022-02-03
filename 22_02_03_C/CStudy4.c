//main함수의 인자전달
#include <stdio.h>

// int main(int argc, char *argv[])
// {
//     int i = 0;
//     printf("전달된 문자열의 수 : %d \n", argc);

//     for(i = 0; i<argc; i++)
//     {
//         printf("%d번째 문자열 : %s \n", i+1, argv[i]);
//     }
// }

void ShowAllString(int argc, char * argv[])
{
    for(int i = 0; i<argc; i++)
    {
        printf("%s \n", argv[i]);
    }
}

int main(void)
{
    char * str[3] = {"C Programing", "C++ Programing", "JAVA Programing"};
    ShowAllString(3, str);
}