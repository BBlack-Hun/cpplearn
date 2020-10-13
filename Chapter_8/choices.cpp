//choices.cpp -- 템플릿 선택

#include<iostream>

using namespace std;

template <class T>
T lesser(T a, T b)
{
    return a < b ? a:b;
}

int lesser ( int a, int b)
{
    a = a < 0 ? -a:a;
    b = b < 0 ? -b:b;
    return a < b ? a:b;
}

int main()
{
    int m = 20;
    int n = -30;

    double x = 15.5;
    double y = 25.9;

    cout << lesser(m,n) << endl;        // #2를 사용한다.
    cout << lesser(x,y) << endl;        // double과 함께  #1을 사용한다.
    cout << lesser<>(m,n) << endl;      //int와 함께 #1을 사용한다.
    cout << lesser<int>(x,y) << endl;   //int와 함께 #1을 사용한다.


    return 0; 
}