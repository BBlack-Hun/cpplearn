//if.cpp - if 구문
#include<iostream>

using namespace std;

int main()
{
	char ch;

	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != ',')
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << "이 문장의 총 문자는 " << total << "이고, ";
	cout << "빈칸의 수는 " << spaces << "입니다. \n";
	return 0;
}
