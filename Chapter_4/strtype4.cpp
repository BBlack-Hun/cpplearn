//strtype4.cpp -- �� ���� �Է�
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	char charr[20];
	string str;

	cout << "�Է� ������ charr�� �ִ� ���ڿ��� ����: "
		<< strlen(charr) << endl;
	cout << "�Է� ������ str�� �ִ� ���ڿ��� ����: "
		<< str.size() << endl;

	cout << "�ؽ�Ʈ �� ���� �Է��Ͻÿ� \n";
	cin.getline(charr, 20);	//�ִ� ���̸� ��Ÿ����.
	cout << "�Է��� �ؽ�Ʈ: " << charr << endl;
	cout << "�� �ٸ� �ؽ�Ʈ �� ���� �Է��Ͻÿ�:\n";
	getline(cin, str);	//���� cin�� ���� �����ڰ� �ƴ� �Ű�����
	cout << "�Է��� �׽�Ʈ: " << str << endl;
	cout << "�Է� ���Ŀ� charr�� �ִ� ���ڿ��� ����: "
		<< strlen(charr) << endl;
	cout << "�Է� ���Ŀ� str�� �ִ� ���ڿ� ����: "
		<< str.size() << endl;
	return 0;
}
