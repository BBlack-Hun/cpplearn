//init_ptr.cpp -- �����͸� �ʱ�ȭ�Ѵ�.

#include<iostream>

using namespace std;

int main()
{
	int higgents = 5;
	int *ptr = &higgents;

	cout << "higgents�� �� = " << higgents << ", higgents�� �ּ� = " << &higgents << endl;
	cout << "*ptr�� �� = " << *ptr << ", ptr�� �� = " << ptr << endl;
	return 0;
}