// protos.cpp -- 함수 원형과 함수 호출

#include<iostream>

using namespace std;

void cheers(int);
double cube(double x );


int main()
{
	cheers(5);
	cout << "하나의 수를 입력하시오: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "한 변의 길이가 " << side <<" 센티미터인 정육면체의 부피는 ";
	cout << volume << "세제곱 센티미터입니다. \n";
	cheers(cube(2));
	return 0;
}

void cheers(int n)
{
	for (int i = 0; i < n; i++)
		cout << "cheer! ";
	cout << endl;
}

double cube (double x)
{
	return x * x * x;
}
