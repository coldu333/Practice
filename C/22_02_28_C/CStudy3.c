//ftell
#include <stdio.h>

int main()
{
    long fpos;
    int i;

    FILE * fp = fopen("text.txt", "wt");
    fputs("1234-", fp);
    fclose(fp);

    fp = fopen("text.txt", "rt");

    for(i = 0; i<4; i++)
    {
        putchar(fgetc(fp)); //1
        fpos = ftell(fp); //1
        fseek(fp, -1, SEEK_END); //-
        putchar(fgetc(fp)); //-
        fseek(fp, fpos, SEEK_SET); //2
    }

    fclose(fp);
}