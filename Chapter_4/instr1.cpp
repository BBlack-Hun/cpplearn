//instr1.cpp -- 여러 개의 문자열을 읽는다.
#include<iostream>

using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessart[ArSize];

	cout << "이름을 입력하세요: \n";
	cin >> name;
	cout << "좋아하는 디저트를 입력하십시오: \n";
	cin >> dessart;
	cout << "맛있는 " << dessart;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
	return 0;
}