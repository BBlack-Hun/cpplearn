//strtype3.cpp -- string Ŭ������ ��Ÿ ���
#include<iostream>
#include<string>	//string Ŭ������ ����ϱ� ����
#include<cstring>	//c ��Ÿ�� ���ڿ� ���̺귯��

using namespace std;
int main()
{
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// string ��ü�� ���԰� ���� �迭�� ����
	str1 = str2;	//str2�� str1�� ����
	strcpy_s(charr1, charr2);	//charr2�� charr1�� ����

	//string ��ü�� �߰��� ���� �迭�� �߰�
	str1 += " paste";	//str1 ���� paste �߰�
	strcat_s(charr1, " juice");	//charr1 ���� juice �߰�


	// stirng ��ü�� ���� ���ϱ�� C ��Ÿ�� ���ڿ��� ���� ���ϱ�
	int len1 = str1.size();	//str1�� ���̸� ���Ѵ�.
	int len2 = strlen(charr1);	//charr1�� ���̸� ���Ѵ�.

	cout << str1 << " ���ڿ����� "
		<< len1 << "���� ���ڰ� ����ִ�. \n";
	cout << charr1 << " ���ڿ����� "
		<< len2 << "���� ���ڰ� ��� �ִ�. \n";

	return 0;


}