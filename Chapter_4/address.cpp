//address.cpp -- & 연산자로 주소를 알아낸다.

#include<iostream>

using namespace std;

int main()
{
	int update = 6;	//int형 변수를 선언
	int * P_update;	//int형을 지시하는 포인터를 선언

	P_update = &update;	//int형의 주소를 포인터에 대입

	// 값을 두가지 방법으로 표현
	cout << "값: update = " << update;
	cout << ", *P_update = " << *P_update << endl;

	//주소를 두가지 방법으로 표현
	cout << "주소: update = " << &update;
	cout << ", *P_update = " << P_update << endl;

	//포인터를 사용하여 값을 변경
	*P_update = *P_update + 1;
	cout << "변경된 update = " << update << endl;
	return 0;

}