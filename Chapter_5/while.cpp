//while.cpp -- while 루프 입문
#include<iostream>
using namespace std;
const int ArSize = 20;

int main()
{
	char name[ArSize];

	cout << "이름을 입력하세요: ";
	cin.getline(name, ArSize);
	cout << "귀하의 영문이름을 한 줄에 한자씩\n";
	cout << "ASCII 코드와 함께 표시하면 이렇게 됩니다.\n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	return 0;
}
