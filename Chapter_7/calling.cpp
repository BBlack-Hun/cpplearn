// calling.cpp -- 함수 정의, 함수 원형, 함수 호출

#include<iostream>

using namespace std;

void simple();

int main()
{
	cout << "main()에서 simple() 함수를 호출합니다.:\n";
	simple();
	cout << "main()이 simple() 함수와 종료됩니다. \n";
	//cin.get()
	return 0;
}

void simple()
{
	cout << "여기는 simple()함수입ㄴ다.\n";
}
		
