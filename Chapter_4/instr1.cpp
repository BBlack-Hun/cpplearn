//instr1.cpp -- ���� ���� ���ڿ��� �д´�.
#include<iostream>

using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessart[ArSize];

	cout << "�̸��� �Է��ϼ���: \n";
	cin >> name;
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�: \n";
	cin >> dessart;
	cout << "���ִ� " << dessart;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
	return 0;
}