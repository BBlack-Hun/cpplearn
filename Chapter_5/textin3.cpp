//textin3.cpp -- 파일 끝까지 문 자 읽기
#include<iostream>

using namespace std;

int main()
{
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false)
	{
		cout << ch;
		++ count;
		cout << "\n";
		cin.get(ch);
	}
	cout << count << " 문자를 읽었습니다.\n";
	return 0;
}
