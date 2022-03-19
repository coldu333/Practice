//문제2
//프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력받아서
//그대로 출력하는 프로그램을 작성해보자
#include <iostream>

int main()
{
    char name[32];
    char PhoneNum[32];

    std::cout<<"이름: ";
    std::cin>>name;
    std::cout<<"전화번호: ";
    std::cin>>PhoneNum;

    std::cout<<"이름: "<<name<<"\n전화번호: "<<PhoneNum<<std::endl;
}