//practice.cpp 프로그래밍 연습!

#include<iostream>
#include<string>

using namespace std;

//구조체 모음
struct CandyBar
{
    char name[30];
    double weight;
    int calory;
}

//매개변수 모음
void test();
void Show_char(const char arr[]);

int main()
{
    test();
}

void test()
{
    char name[15] = "HElloWORLD";
    Show_char(name);
}

void Show_char(const char arr[])
{
    cout << arr;
}
