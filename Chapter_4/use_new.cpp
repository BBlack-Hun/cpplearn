//use_new.cpp -- new ������ ����ϱ�

#include<iostream>

using namespace std;

int main()
{
	int nights = 1001;
	int * pt = new int;
	*pt = 1001;

	cout << "nights�� �� = ";
	cout << nights << ": �޸� ��ġ = " << &nights << endl;
	cout << "int ��";
	cout << "�� = " << *pt << ": �޸� ��ġ = " << pt << endl;

	double *pd = new double;
	*pd = 10000001.0;

	cout << "double ��";
	cout << "�� = " << *pd << ": �޸� ��ġ = " << pd << endl;
	cout << "������ pd�� �޸� ��ġ: " << &pd << endl;
	cout << "pt�� ũ�� = " << sizeof(pt);
	cout << ": *pt�� ũ�� = " << sizeof(*pt) << endl;
	cout << "pd�� ũ�� = " << sizeof(pd);
	cout << "*: pd�� ũ�� = " << sizeof(*pd) << endl;
	return 0;
}