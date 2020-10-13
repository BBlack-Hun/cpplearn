// setf.cpp -- setf()를 사용하여 출력 형식 지정을 제어한다.

#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 63;

    cout << "오늘의 한강 물 온도: ";
    cout.setf(ios_base::showpos);
    cout << temperature << endl;

    cout << "프로그래머들에게 그 값은\n";
    cout << std::hex << temperature << endl;
    cout.setf(ios_base::uppercase);
    cout.setf(ios_base::showbase);
    cout << "또는\n";
    cout << temperature << endl;
    cout << true << "!의 값은";
    cout.setf(ios_base::boolalpha);
    cout << true << "이다.\n";

    return 0;
}