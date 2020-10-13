//stock00 -- stock 클래스 구현
//version 01 -- show() 함수 정의 수정....
#include<iostream>
#include "stock00.h"

void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "주식 수는 음수가 될 수 없으므로, "
                    << company << " shares를 0으로 설정합니다.\n";
        shares = 0;   
    }
    else
    {
        shares = n;
    }
    share_val  = pr;
    set_tot();
    
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout <<"매입 주식 수는 음수가 될 수 없으므로, "
                << "거래가 취소되었습니다.\n";
    }
    else
    {
        shares +=num;
        share_val = price;
        set_tot();
    }
    
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "매도 주식 수는 음수가 될 수 없으므로, "
            << "거래가 취소되었습니다.\n";
    }
    else if (num > shares)
    {
        cout << "보유 주식보다 많은 주를 매도 할 수 없으므로, "
            << "거래가 취소되었스빈다. \n";
    }
    else
    {
        shares -=num;
        share_val = price;
        set_tot();
    }
    
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
//함수 정의를 업데이트 합니다.
{
    using std::cout;
    using std::ios_base;
    //set format to #.###

    ios_base::fmtflags orig =
    cout.setf(ios_base::fixed, ios_base::floatfield);   // 원본 데이터 값을 저장
    std::streamsize prec = cout.precision(3);           //정확성을 위해서 이전 값들을 저장한다.

    cout << "회사명: " << company
                <<"주식 수: " << shares << '\n';
    cout <<"주가: $" << share_val;
    // set format to #.##
    cout.precision(2);
    cout <<"주식 총 가치: $" << total_val << "\n";

    // restore original format
    cout.setf(orig, ios_base::floatfield);              //저장된 값을 리셋한다.
    cout.precision(prec);                               // 과거 값으로 리턴한다.
}