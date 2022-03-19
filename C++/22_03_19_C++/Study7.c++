//문제3
//숫자 하나를 입력바당서 그 숫자에 해당하는
//구구단을 출력해보자
#include<iostream>

int main()
{
    int Dan = 0;

    std::cout<<"하나의 정수를 입력하세요: ";
    std::cin>>Dan;

    std::cout<<"<"<<Dan<<"단 출력>"<<std::endl;
    for(int i = 1; i<10; i++)
        std::cout<<Dan<<" x "<<i<<" = "<<Dan*i<<std::endl;
}