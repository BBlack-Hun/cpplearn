// strgfun.cpp -- 문자열 매개변수와 함수

#include<iostream>

using namespace std;
unsigned int c_in_str(const char * str, char ch);

int main()
{
	char mmm[15] = "minimum";
	//어떤 시스템에서는 char 앞에 static을 넣어야
	//배열을 초기화 할 수 있다.
	
	char *wail = "ululate";

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << mmm << "에는 m이 " << ms << "개가 들어있습니다.\n";
	cout << wail << "에는 u가 " << us << "개가 들어 있습니다.\n";

	return 0;
}

//이 함수는 str 문자열이 들어 있는
//ch 문자의 갯수를 카운트 한다.
unsigned int c_in_str(const char * str, char ch)
{
	int count = 0;
	while(*str)
	{
		if ( *str == ch)
			count++;
		str++;
	}
	return count;
}
