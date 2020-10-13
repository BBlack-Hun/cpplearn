//init_ptr.cpp -- 포인터를 초기화한다.

#include<iostream>

using namespace std;

int main()
{
	int higgents = 5;
	int *ptr = &higgents;

	cout << "higgents의 값 = " << higgents << ", higgents의 주소 = " << &higgents << endl;
	cout << "*ptr의 값 = " << *ptr << ", ptr의 값 = " << ptr << endl;
	return 0;
}