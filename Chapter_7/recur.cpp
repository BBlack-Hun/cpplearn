//recur.cpp -- 하무의 재귀호출
#include<iostream>
using namespace std;

void countdown(int n);


int main()
{
	countdown(4);
	return 0;
}

void countdown(int n)
{
	cout << "카운트 다운... " << n << endl;
	if (n > 0)
		countdown(n-1);
	cout << n << ": Kaboon!\n";
}
