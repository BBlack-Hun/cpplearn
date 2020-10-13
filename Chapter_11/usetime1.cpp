// usetime1.cpp -- Time 클래스의 두번째 드래프트 버전을 사용한다.
// usetime.cpp와 mytime1.cpp를 함께 컴파일 한다.

#include<iostream>
#include "mytime1.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding("coding", 2, 40);
    Time fixing("fixing", 5, 55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    //연산자 표기
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;

    Time morefixing("morefixing", 3, 28);
    cout << "more fixing time = ";
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);
    //함수표기
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;

    return 0;
}