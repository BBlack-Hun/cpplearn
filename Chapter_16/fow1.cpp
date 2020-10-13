// fow1.cpp --auto_ptr을 잘 못 선택한 경우

#include <iostream>
#include <string>
#include <memory>

int main()
{
    using namespace std;
    auto_ptr<string> films[5] =
    {
        auto_ptr<string> (new string("Fowl balls")),
        auto_ptr<string> (new string("Duck Walks")),
        auto_ptr<string> (new string("Chicken Runs")),
        auto_ptr<string> (new string("Turkey Errors")),
        auto_ptr<string> (new string("Goose Eggs"))
    };
    auto_ptr<string> pwin;
    pwin = films[2]; //films[2]가 소유권을 얻음

    cout << "다음은 최고의 조류 영화상 후보입니다\n";
    for (int i = 0; i < 5; i++)
    {
        cout << *films[i] << endl;
    }
    cout << "수상자는 " << *pwin << "!\n";
    cin.get();
    return 0;


}