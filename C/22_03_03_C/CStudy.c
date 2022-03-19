#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(char* number, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int idx =0;
    while(number[idx] > 47 && number[idx] < 58)
    {
        idx++;
    }
    
    char* answer = (char*)malloc(idx-k);
    
    //1. number을 조각낸다.
    //2. 비교해서 가장 큰 숫자대로 줄지은다.
    //3. 자릿수(number의 글자수 - k)만큼 출력한다.
    
    char* temp = number;
    char chartemp;
    printf("%d\n", idx);
    for(int i = 0; i<idx-1; i++)
    {
        if(temp[i] < temp[i+1])
        {
            chartemp = temp[i];
            temp[i] = temp[i+1];
            temp[i+1] = chartemp;
        }
    }
    
    for(int i = 0; i<idx-k; i++)
    {
        answer[i] = temp[i];
    }
    
    return answer;
}

int main()
{
    char number[4] = "1940";
    printf("%s", solution(number, 2));
}