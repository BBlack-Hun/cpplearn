//compstr1.cpp -- 배열을 사용하여 문자열 비교

#include<iostream>
#include<cstring>	//strcmp() 원형

using namespace std;

int main()
{
	char word[5] ="?ate";

	for ( char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "루프가 끝난 뒤의 단어는 " << word << "입니다. \n";
	return 0;
}
