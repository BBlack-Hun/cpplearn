// usetime3.cpp -- Time 클래스의 네번째 드래프트 버전을 사용한다.
// usetime3.cpp와 mytime3.cpp를 함께 컴파일 한다.

#include<iostream>
#include "mytime3.h"

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida와 Tosca: \n";
    cout << aida <<"; " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10 * Tosca: " << 10 * tosca << endl;
    
    return 0;
}