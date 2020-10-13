//practise.cpp -- Chapter 4의 프로그래밍 연습 코딩시간

#include<iostream>
#include<string>
#include<cstring>
#include<array>

using namespace std;

struct ST_info{
	char f_name[20];
	char l_name[10];
	char GPA[2];
	int age;
};
void i_p(void);


int main()
{
	i_p();
	return 0;
}

void i_p()
{
	ST_info stdd;
	cout << "영문 퍼스트 네임(이름): ";
	cin.getline(stdd.f_name, 20);
	cout << "영문 라스트 네임(성): ";
	cin >> stdd.l_name;
	cout << "학생이 원하는 학점: ";
	cin >> stdd.GPA;
	cout << "나이: ";
	cin >> stdd.age;
	cout << "성명: " << stdd.l_name << ", " << stdd.f_name << endl;
	cout << "학점: " << stdd.GPA << endl;
	cout << "나이: " << stdd.age << endl;
}


