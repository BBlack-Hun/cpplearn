//waitng.cpp -- clock()을 시간 지연 루프에 사용한다.

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	cout << "지연 시간을 초단위로 입력하시오: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
				// 지연 시간을 시스템 단위 클록 수로 변환
	cout << "카운트를 시작합니다.\a\n";
	clock_t start = clock();
	while (clock() - start < delay);

	cout <<"종료\a\n";
	return 0;
}
