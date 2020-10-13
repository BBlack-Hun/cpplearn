// str1.cpp -- string 클래스를 소개한다.
#include <iostream>
#include <string>

// string 생성자들을 사용한다.

int main()
{
    using namespace std;
    string one("Lottery winner!");                      // ctor #1
    cout << one << endl;                                // 오버로딩 <<
    string two(20, '$');                                // ctor #2
    cout << two << endl;
    string three(one);                                  // ctor #3
    cout << three << endl;
    one += " Oops!";                                    // 오버로딩 +=
    cout << one << endl;
    two = "Sorry! That was ";
    three[0] = 'P';
    string four;                                        // ctor #4
    four = two + three;                                 // 오버로딩 +, =
    cout << four << endl;
    char alls[] = "All's well what ends well";
    string five(alls, 20);                              // ctor #5
    cout << five << endl;
    string six(alls  + 6, alls + 10);                   // ctor #6
    cout << six << ", ";
    string seven(&five[6], &five[10]);                  // ctor #6  again
    cout << seven << "...\n";
    string eight (four, 7, 16);                         // ctor #7
    cout << eight << "in motion!" << endl;
    return 0;

}
