//instr2.cpp -- getline() �Լ��� �� ���� �д´�.
//cin.getline()�Լ��� ����ϴµ�, �Ű������δ� 2��, �ִ� 3������ ��� �����ϴ�.
//�� ���� �дµ� �־ ������ �ִ� 19���� ���ڱ����� �бⰡ �����ϴ�.

#include<iostream>

using namespace std;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "�̸��� �Է��Ͻʽÿ�: \n";
	cin.getline(name, ArSize);
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�: \n";
	cin.getline(dessert, ArSize);

	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��! \n";
	return 0;

}