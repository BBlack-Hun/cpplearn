//fltadd.cpp --  float형에서의 정밀도 손실 문제
#include<iostream>

using namespace std;

int main()
{
	float a = 2.34E+22f;
	float b = a + 1.0f;
	//float형은 처음 6개의 숫자 또는 7개의 숫자까지만 나타낼 수 있습니다. 
	//23번째 숫자에 1을 더하는 것은 아루런 효과를 갖지 못한다.

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;
	return 0;
}
