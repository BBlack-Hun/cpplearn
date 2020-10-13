//ourfunc.cpp -- 사용자가 작성하는함수를 정의한다.

#include<iostream>
void simon(int); //simon()을 위한 함수 원형

int main()
{
    using namespace std;
    simon(3);
    cout << "정수를 하나 고르시오: ";
    int count;
    cin >> count;
    simon(count);
    cout << "끝!" << endl;
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "simon 왈, 발가락을 " << n << "번 두드려라." << endl;
    //void 형 함수에는 return 구문이 필요 없다.
}