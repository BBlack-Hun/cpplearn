//arith.cpp -- C++의 산술연산자
#include<iostream>

using namespace std;

int main()
{
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "수를 하나 입력하세요: ";
	cin >> hats;
	cout << "다른 수를 입력하십시오: ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	return 0;
}