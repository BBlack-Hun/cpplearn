//newstrct.cpp -- new 연산자를 사용하여 구조체 생성

#include<iostream>

using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable * ps = new inflatable;
	cout << "모형풍선의 이름을 입력하십시오: ";
	cin.get(ps -> name, 20);
	cout << "부피 세제곱 피트 단위로 입력하십시오: ";
	cin >> (*ps).volume;
	cout <<"가격을 달러 단위로 입력하십시오: &";
	cin >> ps -> price;
	cout << "이름: " << (*ps).name << endl;
	cout << "부피: " << ps -> volume << " cubic feet \n";
	cout << "가격: " << ps -> price << endl;
	delete ps;
	return 0;
}
