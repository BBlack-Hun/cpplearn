//bondini.cpp == 이스케이프 시퀀스를 사용한다.

#include<iostream>
using namespace std;

int main()
{
	cout << "\a암호명 \"화려한 외출\" 작전이 방금 개시되었습니다!\n";
	cout << "8자리 비밀번호를 입력하십시오: ________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "입력하신 비밀번호는 " << code << "입니다.\n";
	cout << "\a 비밀번호가 맞습니다.! z3 계획을 진행하십시오!\n";
	return 0;
}