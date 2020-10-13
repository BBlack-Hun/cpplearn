//compstr2.cpp -- string 클래스를 사용하여 문자열 비교

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string word = "?ate";

	for (char ch = 'a'; word !="mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "반복이 끝난 다음의 단어는 " << word << "입니다.\n";
	return 0;
}
