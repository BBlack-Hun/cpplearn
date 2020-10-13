// showpt.cpp -- 정밀도를 설정하고, 뒤에 붙는 소수점을 출력한다.
#include <iostream>

int main()
{
    using std::cout;
    using std::ios_base;
    float price1 =20.40;
    float price2 = 1.9 + 8.0 / 9.0;

    cout.setf(ios_base::showpoint);
    cout << "\"손오공 인형\" $" << price1 << "!\n";
    cout << "\"고릴라 인형\" $" << price2 << "!\n";

    cout.precision(2);
    cout << "\"손오공 인형\" $" << price1 << "!\n";
    cout << "\"고릴라 인형\" $" << price2 << "!\n";

    return 0; 
}