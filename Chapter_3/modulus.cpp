//modulus.cpp == % 연산자를 사용하여 파운드를 스톤으로 변환한다.
#include<iostream>

using namespace std;

int main()
{
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "당신의 체중을 파운드 단위로 입력하십시오: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;
	cout << lbs << "파운드는 " << stone
		<< " 스톤, " << pounds << " 파운드 입니다.\n";
	return 0;
}