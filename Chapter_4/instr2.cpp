//instr2.cpp -- getline() 함수로 한 행을 읽는다.
//cin.getline()함수를 사용하는데, 매개변수로는 2개, 최대 3개까지 사용 가능하다.
//한 행을 읽는데 있어서 그행의 최대 19개의 문자까지만 읽기가 가능하다.

#include<iostream>

using namespace std;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "이름을 입력하십시오: \n";
	cin.getline(name, ArSize);
	cout << "좋아하는 디저트를 입력하십시오: \n";
	cin.getline(dessert, ArSize);

	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님! \n";
	return 0;

}