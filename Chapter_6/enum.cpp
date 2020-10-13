//enum.cpp -- enum(열거체) 사용
#include<iostream>
using namespace std;
enum { red, orange, yellow, green, blue, violet, indigo};

int main()
{
	cout << "컬러코드(0,1,2,3,4,5,6)를 입력하십시오: ";
	int code;
	cin >> code;
	while (code >=red && code <=indigo)
	{
		switch (code)
		{
			case red: cout << "입술이 붉었습니다.\n"; break;
			case orange: cout << "머리카락이 귤색이었습니다.\n"; break;
			case yellow: cout << "신발이 노란색이었습니다.\n"; break;
			case green: cout << "손톱은 초록색이었습니다.\n"; break;
			case blue: cout << "스웨터는 파란색이였습니다.\n"; break;
			case violet: cout << "눈은 보라색이였습니다.\n"; break;
  		   	case indigo: cout << "부위기는 쪽빛이였습니다. \n"; break;
		}
		cout << "컬러코드(0,1,2,3,4,5,6)를 입력하세요: ";
		cin >> code;
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

	
			
