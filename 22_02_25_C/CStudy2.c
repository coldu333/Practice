//바이너리 파일
#include <stdio.h>

int main()
{
    FILE * src = fopen("data.png", "rb");
    FILE * des = fopen("dst.bin", "wb");
    char buf[20];
    int readCnt;

    if(src == NULL || des == NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }

    while(1)
    {
        readCnt = fread((void*)buf, 1, sizeof(buf), src);

        if(readCnt<sizeof(buf))
        {
            if(feof(src)!=0)
            {
                fwrite((void*)buf, 1, readCnt, des);
                puts("파일복사 완료");
                break;
            }
            else
                puts("파일복사 실패");

            break;
        }
    }
}