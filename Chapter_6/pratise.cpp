// practise.cpp -- Chapter6의 연습 문제들 입니다.
//
#include<iostream>
#include<cctype>
#include<array>
#include<string>
using namespace std;

const int strsize = 20;

struct bop {
	char fullname[strsize];		//실명
	char title[strsize];		//직함
	char bopname[strsize];		//BOP 아이디
	int preference;			//0 = fullname, 1 = title, 2 = bopname
};

struct list {
	char name[20];
	double price;
};

void t_LtoU(void);
void sum_or_err();
void menu_samp();
void test1();
void tax();
void trace();
void chk_word();
int main()
{
	chk_word();
	//trace();
	//tax();
	//test1();
	//menu_samp();
	//sum_or_err();
	//t_LtoU();
	return 0;
}

void t_LtoU()
{
	cout<< "@전까지 입력을 받아주세요.";
	char ch;
	cin >> ch;
	while (ch != '@')
	{
		if (isdigit(ch))
			continue;
		else if (islower(ch))
			cout << char (toupper(ch));
		else 
			cout << char (tolower(ch));

		cin >> ch;
	}
}

void sum_or_err()
{
	array<double, 10> done;
	int sum = 0;
	int cnt = 0;
	
	for (int i =0; i <10; i++)
	{
		cin >> done[i];

		if (isalpha(done[i]))
			break;
		else
		{
			cnt++;
			sum +=done[i];
		}
	}

	cout << "총 입금받은 기부금은 " << sum << "입니다. \n";
	cout << "기부금의 평균 금액은 " << sum / cnt << "입니다. \n";
	int c_cnt= 0;
	for (int i =0; i < 10; i++)
	{
		if ((sum/cnt) > done[i])
			c_cnt++;
	}
	cout << "평균 보다 큰 기부금의 개수는 " << c_cnt << "입니다. \n";
}	

void menu_samp()
{
	cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)\n"
		<< "c) camera		p) pianist\n"
		<<" t) tree		g) game\n";

	char ch;
	cin >> ch;
	while (ch != 'q')
	{
		
		switch (ch)
		{
			case 'c':
				cout << "c 출력한다\n"; break;
			case 'p':
				cout << "p 출력한다.\n"; break;
			case 't':
				cout << "단풍나무는 잎이 별처럼 생겼습니다.\n"; break;
			case 'g':
				cout << "게임하자 \n"; break;
			default:
				cout << "c,p,t,g 중에서 하나를 선택하십시오 (끝내려면 q): ";
		


		}
		if (ch == 'c' || ch == 'p' || ch == 't' || ch == 'g')
			break;
		else
			cin >> ch;
	}

}

void test1()
{	
	bop search[5] =
	{
		{"Wimp Macho", "superviser", "1234", 0},
		{"Raki Thodes", "analyst Trainee", "1123", 1},
		{"Celia Laiter", "MIPS", "1323", 2},
		{"Hoppy Hipman", "master", "1111", 0},
		{"Pat Hand", "cat", "2222", 1}
	};
	cout << "Benevolent Order of Programmers \n"
		<<"a. 실명으로 열람		b. 직함으로 엶람\n"
		<<"c. BOP 아이디로 열람		d. 회원지 지정한 것으로 열람\n"
		<<"q. 종료 \n";
	char ch;
	cout << "원하는 것을 선택하십시오: ";
	cin >> ch;
	while (ch != 'q')
	{
		if (ch == 'a')
			for (int i =0; i < 5; i++)
				cout << search[i].fullname << endl;
	
		cout << "원하는 것을 선택하십시오: ";	
		cin >> ch;
			
		
	}


}

void tax()
{
	cout << "당신이 내야 할 세금을 책정하기 위해 소득을 입력하시오: ";
	int m;
	int mo = 0;
	int mo1 = 0;
	int ta = 0;
	cin >> m;
	while (m > 0 || isdigit(m))
	{
		if (m > 5000 && m <= 15000)
		{
			ta = m * 0.10;
			mo = m- 5000;
			cout << m << " 소득일 경우 " << ta << "를 내야 한다. \n";
		}

		else if ( m > 15000 && m < 35000)
		{
			m = m -15000;
			ta = (5000 * 0) + (10000 * 0.10) + (m*0.15);	
			cout << m << " 소득일 경우 " << ta << "를 내야 한다. \n";
	
		}
		else if ( m >= 35000)
		{
			mo = m - 35000;

			ta = (5000 * 0.00) + (10000 * 0.10) + (20000 * 0.15) + (mo * 0.20);
			
			cout << m << " 소득일 경우 " << ta << "를 내야 한다. \n";
		}
		else
			cout << "세금  내지 마세요 ^^\n";
	
		cout << "당신이 내야 할 세금을 책정하기 위해 소득을 입력하시오: ";
		cin >> m;

		
	}

}

void trace()
{
	cout << "기부 할 사람은 몇명인가? ";
	int n;
	cin >> n;
	list * who = new list[n];

	for (int i = 0; i < n; i++)
	{
		cout << i+1 << "번째 기부자의 이름을 입력하세요: ";
		cin >> who[i].name;
		cout << i+1 << "번째 기부자의 기부금을 입력하세요: ";
		cin >> who[i].price;
	}
	int j = 0;
	cout << "고액 기부자\n";
	while ( j < n)
	{
		if (who[j].price >= 10000)
			cout << " 이름:" << who[j].name << "기부액: $" << who[j].price << endl;
		j++;
	}

	int k = 0;
	cout << "소액 기부자\n";
	while ( k < n)
	{
		if (who[k].price < 10000)
			cout << " 이름:" << who[k].name << "기부액: $" << who[k].price << endl;
		k++;
	}

}

void chk_word()
{
	cout << "단어들을 입력하십시오 (끝내려면 q): ";
	int a = 0;
	int b = 0;
	int c = 0;
	string ch;
	cin >> ch;
	while (ch != "q")
	{
		if (isalpha(ch[0]))
		{
			if (ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'i' || ch[0] == 'o' || ch[0] =='u')
				a++;
			else
				b++;
		}
		else
			c++;	
		
		cin >> ch;
	}
	
	cout << "모음으로 시작하는 단어 수 : " << a << endl;
	cout << "자음으로 시작하는 단어 수 : " << b << endl;
	cout << "기타 : " << c << endl;

}

