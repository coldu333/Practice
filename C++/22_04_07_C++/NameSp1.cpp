#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void);
}

namespace BestComImpl
{
    void PrettyFunc(void);
}

namespace ProgComImpl
{
    void SimpleFunc(void);
}

int main()
{
    BestComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc(void)
{
    std::cout<<"BestCom이 정의한 함수"<<std::endl;
    PrettyFunc(); //같은 namespace이기 때문에 이름공간을 명시하지 않는다.
    ProgComImpl::SimpleFunc(); //다른 namespace이기 때문에 이름공간을 명시해야 한다.
}

void BestComImpl::PrettyFunc()
{
    std::cout<<"So Pretty!!"<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
    std::cout<<"ProgCom이 정의한 함수"<<std::endl;
}