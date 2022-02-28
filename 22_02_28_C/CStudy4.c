//문제1
//FILE 구조체 포인터가 인자로 전달되면
//파일의 크기를 바이트 단위로 계산하여 반환하는 함수를 정의하자
//단 ftell 함수를 이용해서 구현해야 하며
//함수가 호출된 이후에도 파일 위치 지시자 정보가 변경되어서는 안 된다.
#include <stdio.h>

int SizeofFile(FILE * fp)
{
    int fpos, size;
    fpos = ftell(fp);
    
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    fseek(fp, size, SEEK_SET);
    return size;
}

int main()
{
    FILE * fp = fopen("text.txt", "rt");
    int size;
    
    size = SizeofFile(fp);
    fclose(fp);

    printf("%d\n", size);
}