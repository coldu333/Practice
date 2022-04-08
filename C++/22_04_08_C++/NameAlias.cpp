//과도한 네임스페이스 중첩에 대하여
#include<iostream>
using namespace std;

namespace AAA
{
    namespace BBB
    {
        namespace CCC
        {
            int num1;
            int num2;
        }
    }
}

int main()
{
    AAA::BBB::CCC::num1 = 20;
    AAA::BBB::CCC::num2 = 30;

    namespace ABC = AAA::BBB::CCC; // 별칭을 만들어 사용 가능하다.
    cout<<ABC::num1<<endl;
    cout<<ABC::num2<<endl;
}