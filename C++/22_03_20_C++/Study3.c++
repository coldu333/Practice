//매개 변수의 디폴트값
#include<iostream>

int Adder(int num1=1, int num2=2);

int main()
{
    std::cout<<Adder()<<std::endl;
    std::cout<<Adder(5)<<std::endl; // 함수의 인자를 하나만 전달할 경우, 첫번째 인자로 간주된다.
    std::cout<<Adder(3, 5)<<std::endl;
}

int Adder(int num1, int num2)
{
    return num1+num2;
}