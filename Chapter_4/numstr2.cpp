//numstr.cpp -- ���� ������ ������ ���α׷�, ��ġ �Է� �ڿ� ���� ���ڿ� �б�

#include<iostream>

using namespace std;

int main()
{
	cout << "���� ��ô� ����Ʈ�� ���� �����ϼ̽��ϱ�?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "��ô� ���ø� ������ �ֽðڽ��ϱ�?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "����Ʈ ���� ����: " << year << endl;
	cout << "����: " << address << endl;
	cout << "����� �Ϸ�Ǿ����ϴ�. \n";
	return 0;
}