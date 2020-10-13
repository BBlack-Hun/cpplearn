//dowhile.cpp

#include<iostream>
using namespace std;
int main()
{
	int n;

	cout <<"1부터 10까지의 수중에서 ";
	cout << "내가 좋아하는 수를 한번 맞춰보시오.\n";
	do
	{
		cin >> n;
	} while (n !=8);
	cout << "맞았습니다. 내가 좋아하는 수는 럭키 8입니다. \n";
	return 0;
}
