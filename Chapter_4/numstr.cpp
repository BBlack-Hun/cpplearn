//numstr.cpp -- ��ġ �Է� �ڿ� ���� ���ڿ� �Է�
#include<iostream>

using namespace std;
int main()
{
	cout << "���� ��ô� ����Ʈ�� ���� �����ϼ̽��ϱ�?\n";
	int year;
	cin >> year;
	cout << "��ô� ���ø� ������ �ֽðڽ��ϱ�?\n";
	char address[80];
	cin.getline(address, 80);	
	//cin�� ���๮�ڸ� �Է�ť�� ���ܵд�, getline�� �Է�ť�� �ִ� ���๮�ڸ� �������� �о� address�� �����Ѵ�. 
	//�� �ذ����� cin���� �Է¹��� ������ �Է� ť�� �ִ� �о� address�� �Է¹ޱ����� ������ �ȴ�.
	//get()�� ����ϰų� �ٸ� ����� ����ϸ� �ȴ�.
	cout << "����Ʈ ���� ����: " << year << endl;
	cout << "����: " << address << endl;
	cout << "����� �Ϸ�Ǿ����ϴ�!\n";
	return 0;
}