// usestok1.cpp
// stock.cpp와 컴파일 한다.

#include<iostream>
#include "stock10.h"

int main()
{   
    {
        using std::cout;
        cout << "생성자를 사용하여 새로운 객체들을 생성한다.\n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        Stock stock2 = Stock("Boffo Objects", 2, 2.0);
        stock2.show();

        cout << "stokc1을 stock2에 대입한다.\n";

        stock2 = stock1;
        cout << "stock1과 stock2를 출력한다. \n";
        stock1.show();
        stock2.show();

        cout << "생성자를 사용하여 객체를 재설정한다.\n";
        stock1 = Stock("Nifty Food", 10, 50.0);
        cout << "갱신된 stock1:\n";
        stock1.show();
        cout << "프로그램을 종료합니다. \n";
    }
    return 0;
}