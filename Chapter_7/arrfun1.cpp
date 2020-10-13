// arrfunc1.cpp -- 배열 매개변수를 사용하는 함수
#include<iostream>
const int ArSize = 8;

using namespace std;
int sum_arr(int arr[], int n);

int main()
{
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
	//어떤 시스템에서는 앞에 static을 넣어주어야 초기화 할 수 있다.
	//
	int sum = sum_arr(cookies, ArSize);

	cout << "먹은 과제 수 합계: " << sum << "\n";
	return 0;
}

int sum_arr(int arr[], int n)
{
	int total= 0;

	for ( int i = 0; i < n ; i++)
	{
		total = total + arr[i];
	}
	return total;
	
}

