//문제1
//다음 main함수에서 필요로 하는 swap함수를 오버로딩해서 구현해보자
#include <iostream>

void swap(int* num1, int* num2)
{
    int temp = 0;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swap(char* ch1, char* ch2)
{
    char temp;

    temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

void swap(double* dbl1, double* dbl2)
{
    double temp;

    temp = *dbl1;
    *dbl1 = *dbl2;
    *dbl2 = temp;
}


int main()
{
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    char ch1 = 'A', ch2 ='Z';
    swap(&ch1, &ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;

    double dbl1 = 1.111, dbl2 = 5.555;
    swap(&dbl1, &dbl2);
    std::cout<<dbl1<<' '<<dbl2<<std::endl;
}