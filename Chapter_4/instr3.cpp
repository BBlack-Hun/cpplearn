//instr3.cpp -- get() & get()���� ���� �ܾ �д´�.
#include<iostream>

using namespace std;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "�̸��� �Է��Ͻʽÿ�: \n";
	cin.get(name, ArSize).get(); // ���ڿ� ���๮�ڸ� �д´�. getline���� ���̴� getline�� ���๮�� ������ ������ get�� ���๮�ڱ��� �д´�.
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�: \n";
	cin.get(dessert, ArSize).get();
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ� " << name << " ��! \n";
	return 0;
}