//addpntrs.cpp -- ������ ����

#include<iostream>

using namespace std;

int main()
{
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stack[3] = { 3, 2, 1 };

	//�迭�� �ּҸ� �˾Ƴ��� �ΰ��� ���
	double *pw = wages;		//�迭 �̸� = �ּ�, �Ƹ��� �迭�� �����ϴ� ��ġ�� �ּ�,
	short *ps = &stack[0];		//�迭 ���ҿ� �ּ� ������ ���, �Ƹ��� �迭�ȿ� �ִ� ù ������ �ּ�

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw += 1;
	cout << "pw �����Ϳ� 1�� ����\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps += 1;
	cout << "ps �����Ϳ� 1�� ����:\n";
	cout << "ps = " << ps << ", *ps  = " << *ps << "\n\n";

	cout << "�迭 ǥ��� �� ���ҿ� ����\n";
	cout << "stack[0] = " << stack[0]
		<< ", stack[1] = " << stack[1] << endl;
	cout << "������ ǥ��� �� ���ҿ� ����\n";
	cout << "stack = " << *stack
		<< ", *(stack) +1 = " << *(stack+1) << endl;
	cout << sizeof(wages) << " = wages �迭�� ũ��\n";
	cout << sizeof(pw) << " = pw �������� ũ��\n";
	return 0;
}
