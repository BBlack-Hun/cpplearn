//getinfo.cpp
#include<iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "당근을 몇개나 가지고 있니? ";
    cin >> carrots; //c++ 입력
    cout << "여기 두 개가 더 있다. ";
    carrots += 2;
    //다음 라인은 출력을 연결한다.
    cout << "이제 당근은 모두 " << carrots << "개이다." << endl;
    return 0;
}