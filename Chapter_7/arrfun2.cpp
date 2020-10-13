// arrfun2.cpp -- 배열 매개변수를 사용하는 함수

#include<iostream>

using namespace std;

const int ArSize = 8;

int sum_arr(int arr[], int n);

int main()
{
	int cookies[ArSize] = {1, 2, 4, 8, 16, 32 ,64, 128};

	cout << cookies << " = 밷열 주소, ";
	cout << "sizeof cookies = " << sizeof cookies << endl;
	int sum = sum_arr(cookies, ArSize);
	cout << "먹은 과자 수의 합계: " << sum << endl;
	sum = sum_arr(cookies, 3);
	cout << "처음 세 사람은 과자 " << sum << "개를 먹었스빈다. \n";
	sum = sum_arr(cookies + 4, 4);
	cout << "마지막 네사람은 과자 " << sum << "개를 먹었습니다. \n";
	return 0;
}

// 정수 배열 합계를 리턴한다.
int sum_arr(int arr[], int n)
{
	int total = 0;
	cout << arr << " = arr, ";
	cout << "sizeof arr = " << sizeof arr << endl;

	for( int i = 0; i < n; i++)
	{
		total = total + arr[i];
	}
	return total;
}
