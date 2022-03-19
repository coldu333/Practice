//입력 버퍼 비우기
#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
    while(getchar()!= '\n'); 
    // == '\n'이 입력되기 전까지 끊임없이 while문이 돌아가기 때문에 
    // '\n'이 입력되기 전까지 기다리겠다는 의미와 같다. 
    // 그 외에 의미가 없기 때문에 반복문을 생략하고 세미콜론을 찍는다.

    //위에 코드는 아래와 같은 코드이다. 아직 왜 저렇게 줄일 수 있는지 이해가 되지 않는다.
    // char a;
    // while(0)
    // {
    //     a = getchar();
    //     if(a == '\n')
    //         break;
    // }
}

int main()
{
    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력: ", stdout);
    fgets(perID, sizeof(perID), stdin);
    ClearLineFromReadBuffer();//엔터를 만나는 순간 입력버퍼를 비운다.
    //stdin의 잔류한 글자들을 지워버린다.

    fputs("이름 입력: ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("주민번호 : %s\n", perID);
    printf("이름: %s \n", name);
}