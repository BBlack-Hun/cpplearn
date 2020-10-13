//outfunc1.cpp -- using 지시자의 위치 변경
#include<iostream>

using namespace std;    //이 파일에 있는 모든 함수 정의에 영향을 준다.

void simon(int);

int main()
{
    simon(3);
    cout << "정수를 하나 고르시오 ";
    int count;
    cin >> count;
    simon(count);
    cout << "끝!" << endl;
    return 0;
}

void simon(int n){
    cout << "simon은 " << n << "번 박수를 쳤다. " << endl;
}