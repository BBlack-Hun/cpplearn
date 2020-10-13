//practise.cpp -- Chapter 5 programming practice
#include<iostream>
#include<array>
#include<cstring>
#include<string>

using namespace std;

struct customer{
	char name;
	int money;
	float interest;
};

struct car{
	char m_name[20];
	int m_year;
};


void f_add();
void formore(void);
void enter_num(void);
void invest(void);
void sell_book(void);
void sell_book2(void);
void mng_car(void);
void chk_done(void);
void m_line(void);
void chk_done2();
int main()
{
	chk_done2();
	//m_line();
	//chk_done();
	//mng_car();
	//sell_book2();
	//sell_book();
	//invest();
	//enter_num();
	//formore();
	//f_add();
	return 0;
}

void f_add()
{
	cout << "사용자로부터 2개의 정수를 입력받으시오: ";
	int a, b;
	int sum= 0;
	cin >> a;
	cin >> b;
	for (int i = a; i<=b; i++)
		sum +=i;

	cout << a << "부터 " << b <<"까지의 합은 " << sum <<" 입니다\n";
	
}

void formore()
{
	array<long double, 101> factorial;
	factorial[1] = factorial[0] = 1LL;
	for (int i = 2; i <= 100; i++)
		factorial[i] = i * factorial[i-1];
	for (int i = 0; i <= 100; i++)
		cout << i << "! = " <<factorial[i] << endl;

}
void enter_num()
{
	int sum =0;
	int ck;
	while ( ck != 0)
	{
		cout << "값을 입력해주세요: ";
		cin >> ck;
		sum +=ck;
	}
	cout << "그동안 입력 받은 숫자의 합은" << sum << "입니다 \n";
}

void invest()
{
	customer cs[2]
	{
		{'A', 100000, 0},
		{'B', 100000, 0}
	};
	int year = 0;
	do	
	{
		cout << "현재 가지고 있는 돈은: " << cs[0].money << endl;
		cs[0].interest = 100000 * 0.10;
		cs[0].money += cs[0].interest;
		cout << "이자 받은 뒤, 가지고 있는 돈은: " << cs[0].money << endl;
	
		cout << cs[1].name << "이 현재 가지고 있는 돈은: " << cs[1].money << endl;
		cs[1].interest = cs[1].money * 0.05;
		cs[1].money += cs[1].interest;
		cout << "이자 받은 뒤, 가지고 있는 돈은: " << cs[1].money << endl;
		year ++;
	} while(cs[0].interest > cs[1].interest);
	cout << year << "년 뒤에 B가 더 성공할 수 있다. " << endl;
                 

}

void sell_book()
{
	string month[13] = {"1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월"};
	int s_b[13];
	for ( int i = 0 ; i < 12; i++)
	{
		cout << month[i] << "의 판매량을 입력하시오: ";
		cin >> s_b[i];
		cout << s_b[i] << endl;

	}
	int sum = 0;
	
	for (int j = 0; j < 12 ; j++)
	{
		cout << "현재 sum값은: " << sum << endl;
		sum += s_b[j];
		
	}
		

	cout << "연간 판매량은 : " << sum << "입니다. \n";

}

void sell_book2()
{
	string months[3][13] = {
		{"1년차 1월", "1년차 2월", "1년차 3월", "1년차 4월", "1년차 5월", "1년차 6월", "1년차 7월", "1년차 18", "1년차 9월", "1년차 10월", "1년차 11월","1년차 12월"},
		{"2년차 1월", "2년차 2월", "2년차 3월", "2년차 4월", "2년차 5월", "2년차 6월", "2년차 7월", "2년차 18", "2년차 9월", "2년차 10월", "2년차 11월","2년차 12월"},
		{"3년차 1월", "3년차 2월", "3년차 3월", "3년차 4월", "3년차 5월", "3년차 6월", "3년차 7월", "3년차 18", "3년차 9월", "3년차 10월", "3년차 11월","3년차 12월"}
		};

	int s_bs[3][13];
	int sum[4] = {0, };
	for (int i =0; i < 3; i ++){
		for (int j = 0; j<12; j++){
			cout << months[i][j] << "판매량을 입력하시오: ";
			cin >> s_bs[i][j];
			sum[i] += s_bs[i][j];
		}
		cout << i+1 << "년차의 연간 판매량은: " << sum[i] << endl;
		
	}
	cout << "2년차까지 누적 판매량은" << sum[0] + sum[1] << endl;
	cout << "3년차까지 누적 판매량은" << sum[0] + sum[1] + sum[2]<< endl;
			
}

void mng_car()
{
	cout << "몇 대의 차를 목록을 관리하시겠습니까? ";
	int n;
	cin >> n;
	car * mgr  = new car[n+1];
	for (int i = 0; i < n; i ++){
		cout << "자동차 #" << i+1 <<": \n";
		cout << "제작업체: ";
		cin >> mgr[i].m_name;
		cout << "제작년도: ";
		cin >> mgr[i].m_year;
	}
	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다.\n";
	for (int i = 0; i <n; i++)	
	{
		cout << mgr[i].m_year << "년형 " << mgr[i].m_name << endl;
	}

		
}

void chk_done()
{
	cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력): ";
	
	char ch[100];
	int cnt=0;
	while (strcmp(ch, "done"))
	{
		cin >> ch;
		cnt++;
		

	}
	cout << "총" << cnt -1 <<" 단어가 입력되었습니다.\n";
	
}

void chk_done2()
{
	cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력): ";
	string ch;
	int cnt=0;
	while (ch != "done")
	{
		cin >> ch;
		cnt++;
	}
	cout << "총" << cnt -1 <<" 단어가 입력되었습니다.\n";

	
}
void m_line()
{
	cout << "출력할 행 수를 입력하시오: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <n-i-1; j++)
		{
			cout << ".";
		}
		for (int k = n - i-1; k < n; k++)
			cout << "*";
		cout << "\n";
	}
}

