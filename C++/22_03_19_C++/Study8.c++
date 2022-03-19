//문제4
//판매원들의 급여 계산프로그램을 작성해보자
//모든 판매원에게 매달 50의 기본금여와 물품 판매가격의 12%에 해당하는 돈을 지급한다.
#include<iostream>

int main()
{
    int Salary = 0;
    
    while(1)
    {
        std::cout<<"판매 급액을 만원 단위로 입력(-1 to end): ";
        std::cin>>Salary;

        if(Salary == -1)
        {
            std::cout<<"프로그램을 종료합니다.";
            return 1;
        }

        Salary = 50+ Salary*12/100;
        std::cout<<"이번 달 급여: "<<Salary<<"만원"<<std::endl;
    }
}