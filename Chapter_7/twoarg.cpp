// twoarg.cpp -- 매개변수를 두개나 갖는 함수

#include<iostream>

using namespace std;

void n_chars(char, int);
int main()
{
	int times;
	char ch;

	cout << "문자를 하나 입력하십시오: ";
	cin >> ch;
	while ( ch != 'q')
	{
		cout << "정수를 하나 입력하십시오: ";
		cin >> times;
		n_chars(ch, times);
		cout << "\n 계속하려면 다른 문자를 입력하송, "
			"끝내려면 q를 누르십시오: ";
		cin >> ch;
	}
	cout << "현재 times의 값은 " << times << "입니다. \n";
	cout << "프로그램을 종료합니다. \n";
	return 0;
}

void n_chars (char c, int n)
{
	while (n-- >0)
		cout << c;
}
