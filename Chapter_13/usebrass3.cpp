// usebrass3.cpp -- 추상적 기호 클래스를 사용하는 다양한 단계의 사례
// acctabc.cpp와 컴파일한다.

#include <iostream>
#include <string>
#include "acctabc.h"

const int CLIENTS = 4;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    AcctABC * P_clients[CLIENTS];
    std::string temp;
    long tempnum;
    double tempbal;
    char kind;
    
    for (int i = 0; i < CLIENTS; i++)
    {
        cout << "고객의 이름을 입력한다: ";
        getline(cin, temp);
        cout << "고객의 은행계좌 번호를 입력한다: ";
        cin >> tempnum;
        cout << "계좌 개설을 입력한다: $";
        cin >> tempbal;
        cout << "Brass 계좌에 1번을 입력한다. 또는,"
            << "BrassPlus 계좌에 2번을 입력한다. ";
        
        while (cin >> kind && (kind != '1' && kind !='2'))
            cout << "1 또는 2를 입력한다.";
        if (kind=='1')
            P_clients[i] = new Brass(temp, tempnum, tempbal);
        else
        {
            double tmax, trate;
            cout << "당좌대월 한계를 입력한다 : $";
            cin >> tmax;
            cout << "이자율을 입력한다."
                << "소수점을 사용한다: ";
            
            cin >> trate;
            P_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
    
        }
        while (cin.get() != '\n')
            continue;
        
    }
    cout << endl;
    for (int i = 0; i < CLIENTS; i++)
    {
        P_clients[i] -> ViewAcct();
        cout << endl;
    }

    for (int i = 0; i < CLIENTS; i++)
    {
        delete P_clients[i];    // 가용 메모리
    }
    cout << "프로그램을 종료합니다. \n";

    return 0;
}