//address.cpp -- & �����ڷ� �ּҸ� �˾Ƴ���.

#include<iostream>

using namespace std;

int main()
{
	int update = 6;	//int�� ������ ����
	int * P_update;	//int���� �����ϴ� �����͸� ����

	P_update = &update;	//int���� �ּҸ� �����Ϳ� ����

	// ���� �ΰ��� ������� ǥ��
	cout << "��: update = " << update;
	cout << ", *P_update = " << *P_update << endl;

	//�ּҸ� �ΰ��� ������� ǥ��
	cout << "�ּ�: update = " << &update;
	cout << ", *P_update = " << P_update << endl;

	//�����͸� ����Ͽ� ���� ����
	*P_update = *P_update + 1;
	cout << "����� update = " << update << endl;
	return 0;

}