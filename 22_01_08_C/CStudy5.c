//문제 5
//프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하시오.
//단, 몇개를 입력할 건지 먼저 묻는다.
//평균 값은 소수점 이하까지 계산해서 출력한다.
#include <stdio.h>

int main()
{
    int count = 0, i = 0;
    int num = 0;
    float result = 0;

    printf("몇 개의 정수를 입력하실건가요? : ");
    scanf("%d", &count);
    printf("\n%d개의 정수를 입력하세요 : ", count);

    while(i < count)
    {
        scanf("%d", &num);
        result += num;
        i++;
    }
    result /= count;
    printf("입력 받은 정수의 평균 값 : %f\n", result);
}