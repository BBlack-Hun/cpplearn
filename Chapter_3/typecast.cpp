//typecast.cpp -- ���� �������� ��ȯ
#include<iostream>

using namespace std;

int main()
{
	int auks, bats, coots;

	//���� ������ �� ���� double������ ���� �Ŀ�
	//�� ���� int������ ��ȯ�Ͽ� �����Ѵ�.
	auks = 19.99 + 11.99;

	//���� �� ������ �� ���� int������ ��ȯ�� �Ŀ� ���Ѵ�.
	bats = (int) 19.99 + (int) 11.99;
	coots = int(19.99) + int(11.99);
	cout << "�ٴٿ��� = " << auks << ", ���� = " << bats;
	cout << ", �˵տ��� = " << coots << endl;

	char ch = 'Z';
	cout << "�ڵ� " << ch << " �� ����";
	cout << int(ch) << endl;
	cout << "��, �ڵ� Z�� ���� ";
	cout << static_cast<int> (ch) << endl;

	return 0;
}