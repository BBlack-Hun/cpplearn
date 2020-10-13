//strfile.cpp == 파일로부터 문자열을 읽는다.
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
int main()
{
    using namespace std;
    ifstream fin;

    fin.open("tobuy.txt");
    if (fin.is_open() == false)
    {
        cerr << "파일을 열 수 없습니다.\n";
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
    getline(fin, item, ':');
    while (fin)
    {
        ++count;
        cout << count <<": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "프로그램을 종료합니다." << endl;
    fin.close();
    return 0;
}