// ilist.cpp -- initializer_list를 사용한다. (C++11 feature)
#include <iostream>
#include <initializer_list>

double sum(std::initializer_list<double> li);
double average(const std::initializer_list<double> & ri1);

int main()
{
    using std::cout;

    cout << "목록 1 : 합계 = " << sum({2,3,4}) << ", 평균 = " << average({2,3,4}) << '\n';
    std::initializer_list<double> dl= {1.1,2.2,3.3,4.4,5.5};
    cout << "목록 2 : 합계 = " << sum(dl) << ", 평균 = " << average(dl) << '\n';
    dl = {16.0, 25.0, 36.0, 40.0, 64.0};
    cout << "목록 3: 합계 = " << sum(dl) << ", 평균 = " << average(dl) << '\n';
    return 0;
}

double sum(std::initializer_list<double> il)
{
    double tot = 0;
    for (auto p = il.begin(); p != il.end(); p++)
        tot += *p;
    return tot;
}

double average(const std::initializer_list<double> & ri1)
{
    double tot = 0;
    int n = ri1.size();
    double ave = 0.0;
    if (n > 0)
    {
        for ( auto p = ri1.begin(); p != ri1.end(); p++)
            tot +=*p;
        ave = tot/ n;
    }
    return ave;
}