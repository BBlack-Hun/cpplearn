//ipelse.cpp

#include<iostream>

using namespace std;

int main()
{
	char ch;

	cout << "타이핑하시면, 반복수행하겠스빈다.\n";
	cin.get(ch);
	while (ch != '.')
	{
		if (ch =='\n')
			cout << ch;
		else
			cout << ++ch;
		cin.get(ch);
	}
	// ++ch 대신에 초 + 1을 사용하면 어떻게 될까?
	cout << "\n혼란스럽게 해서 죄송합니다. \n";
	// cin.get()
	// cin.get();
	return 0;
}

