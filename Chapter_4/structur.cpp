//structur.cpp -- 간단한 구조체
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
	inflatable guest =
	{
		"Glorious Gloria",	//name의 값
		1.88,				//volume의 값
		29.99				//price의 값
	};						//guest는 inflatable형의 구조체 변수이다.

	inflatable pal =
	{
		"Aduiacious Arthur",
		3.12,
		32.99
	};						//pal은 inflatable형의 두 번째 변수이다.

	//참고: 어떤 C++ 시스템에서는 다음과 같은 형식을 요구한다.
	//static inflatable guest=

	cout << "지금판매하고 있는 모형풍선은\n" << guest.name;
	cout << "와 " << pal.name << "입니다. \n";
	//pal.name은 pal변수의 name 맴버이다.
	cout << "두 제품을  $";
	cout << guest.price + pal.price << "에 드리겠습니다.\n";
	return 0;
}

	