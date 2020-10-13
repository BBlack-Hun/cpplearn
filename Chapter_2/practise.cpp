//1
#include<iostream>

using namespace std;

void na_print();
void mtok();
void double_print1();
void double_print2();
void age_month();
void CtoF();
int trans(double);
void t_time(int, int);

int main()
{
    na_print();
    mtok();
    double_print1();
    double_print1();
    double_print2();
    double_print2();
    age_month();
    CtoF();
    cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
    double year;
    cin >> year;
    cout << year << "광년은 " << trans(year) << "천문 단위입니다." << endl;

    int hour, minute;
    cout << "시간 값을 입력하시오: ";
    cin >> hour;
    cout << "분 값을 입력하시오: ";
    cin >> minute;
    t_time(hour, minute);
    return 0;
}

void na_print()
{
    cout << "My name is jeonghun" << endl;
    cout << "My address is kangwondo" << endl;
}

void mtok()
{
    cout << "mile을 입력해주세요. ";
    double m;
    cin >> m;
    double k;
    k = m * 1.60934;
    cout << m << "마일은 " << k << "킬로미터 입니다. "<< endl;

}

void double_print1()
{
    cout << "Three blind mice" << endl;
}

void double_print2()
{
    cout << "See how they run" << endl;
}

void age_month()
{
    cout << "Enter your age :";
    int age;
    cin >> age;
    cout << "이때 당신의 나이를 월수로 나타낼 경우 " << age * 12 << "입니다." << endl;
}

void CtoF()
{
    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
    double temp;
    cin >> temp;
    cout << "섭씨" << temp << "도는 화씨로 " << 1.8 * temp + 32.0 << "도입니다." << endl;
}

int trans(double y)
{
    return y * 63240;
}

void t_time(int h, int m)
{
    cout << "시간: " << h << ":" << m << endl;
}