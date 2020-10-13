//textin2.cpp -- cin.get(char) 사용하기

#include<iostream>
using namespace std;

int main()
{
	char ch;
	int count = 0;

	cout << "문자들을 입력하시오; 끝내려면 #을 입력하시오: \n";
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch <<"\n";
		++ count ;
		cin.get(ch);
	}
	cout << endl << count << " 문자를 읽었스빈다.\n";
	return 0;
}



