//exceed.cpp -- 정수의 한계값을 초과한다.

#include<iostream>
#define ZERO 0
#include<climits>
using namespace std;

int main()
{
    short Dohee = SHRT_MAX;
    unsigned short Insuk = Dohee;

    cout << "도희의 계좌에는 " << Dohee << "원이 들어 있고, ";
    cout << "인숙이의 계좌에도 " << Insuk << "원이 들어 있다." << endl;
    Dohee +=1;
    Insuk +=1;
    cout << "도희의 잔고는 "  << Dohee << "원이 되었고, ";
    cout << "인숙이의 잔고는 "  << Insuk << "원이 되었다." << endl;
    cout << "이럴 수가! 도희가 나 물래 대출을 했나?" << endl;
    Dohee = ZERO;
    Insuk = ZERO;
    cout << "도희에 계좌에는 " << Dohee << "원이 들어 있고 ";
    cout << "인숙이의 계좌에도 " << Insuk << "원이 들어 있다." << endl;
    cout << "각각의 계좌에서 1원씩 인출한다. " << endl;
    Dohee -=1;
    Insuk -=1;
    cout << "도희의 잔고는 "  << Dohee << "원이 되었고, ";
    cout << "인숙이의 잔고는 "  << Insuk << "원이 되었다." << endl;
    cout << "이럴 수가! 인숙이가 복권에 당첨되었나!" << endl;
    return 0;
}