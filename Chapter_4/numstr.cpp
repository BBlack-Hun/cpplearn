//numstr.cpp -- 수치 입력 뒤에 오는 문자열 입력
#include<iostream>

using namespace std;
int main()
{
	cout << "지금 사시는 아파트에 언제 입주하셨습니까?\n";
	int year;
	cin >> year;
	cout << "사시는 도시를 말씀해 주시겠습니까?\n";
	char address[80];
	cin.getline(address, 80);	
	//cin은 개행문자를 입력큐에 남겨둔다, getline은 입력큐에 있는 개행문자를 빈행으로 읽어 address에 대입한다. 
	//즉 해결방안은 cin으로 입력받은 다음에 입력 큐에 있는 읽어 address를 입력받기전에 날리면 된다.
	//get()을 사용하거나 다른 방법을 사용하면 된다.
	cout << "아파트 입주 연도: " << year << endl;
	cout << "도시: " << address << endl;
	cout << "등록이 완료되었습니다!\n";
	return 0;
}