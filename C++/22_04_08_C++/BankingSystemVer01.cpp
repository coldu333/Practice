//기능1 계좌개설
//기능2 입금
//기능3 출금
//기능4 전체고객 잔액조회
//통장의 계좌번호는 중복체크를 하지 않는다.
//입출금액은 무조건 0보다 크다.(따로 오류검사를 하지 않는다);
//고객의 계좌정보는 계좌번호, 고객이름, 고객의 잔액 이 3가지만 저장 및 관리한다.
//둘 이상의 고객 정보 저장을 위해서 배열을 사용한다.
//계좌번호는 정수의 형태이다.
#include <iostream>
using namespace std;

int main()
{
    int sel = 0;
    while(true)
    {
        cout<<"-----Menu-----"<<endl;
        cout<<"1. 계좌개설"<< endl;
        cout<<"2. 입 금" << endl;
        cout<<"3. 출 금" << endl;
        cout<<"4. 계좌정보 전체 출력"<<endl;
        cout<<"5. 프로그램 종료"<<endl;

        cout<<"선택: "; cin>>sel;

        if(sel == 1)
        {

        }
        else if(sel == 2)
        {

        }
        else if(sel == 3)
        {

        }
        else if(sel == 4)
        {

        }
        else if(sel==5)
            break;
    }
}