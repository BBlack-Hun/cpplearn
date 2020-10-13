//jump.cpp -- continue와 break

#include<iostream>
using namespace std;
const int ArSize =80;
int main()
{
	char line[ArSize];
	int spaces = 0;

	cout << "한 행의 텍스트를 입력하시오: \n";
	cin.get(line, ArSize);
	cout << "전체 텍스트: \n" << line << endl;
	cout << "첫 마침표까지의 텍스트:\n";

	for (int i = 0; line[i] !='\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n빈칸 문자는 " << spaces<< "개입니다.\n";
	cout << "종료\n";
	return 0;
}
