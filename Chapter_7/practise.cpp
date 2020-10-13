//practise.cpp -- Chapter 7의 연습문제입니다.

#include<iostream>
#include<string>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

const int Max = 10;
const int n = 2;
// 작성한 함수 원형 정의
double joinaverage();
int re_score();
int fill_array(int golf[], int Max);
void show_array(int golf[], int size);
int account_array(int golf[], int size);
void print_box(const box ps);
void cal_box(box *pa);
void lotto();
long double probability(unsigned numbers, unsigned picks);
void factorial();
double r_factorial(int n);
double Fill_array(double name[], double n);
void Show_array(double name[], double n);
double Reverse_array(double name[], double n);
void arr_fun();

int main()
{
	arr_fun();
	//factorial();
	//lotto();
	/*
	box input;
	cout << "입력해주세요" << '\n';
	cin >> input.maker;
	cin >> input.height;
	cin >> input.width;
	cin >> input.length;
	input.volume = 0.0;
	print_box(input);
	cal_box(&input);
	*/
	//re_score();
	//cout << "마지막으로 입력받은 숫자에 대한 조화평균은 ";
	//cout << joinaverage() << "입니다" << endl;
	return 0;	
}

double joinaverage()
{
	cout << "입력 받는 두 수중 하나가 0이 될때 까지 쌍으로 입력을 받으세요";
	double a, b;
	double ja = 0.0;
	cin >> a >> b;
	while (a != 0.0 and b != 0.0)
	{
		cout << "입력 받은 " << a <<", " << b << " 에 대한 조화평균은 ";
		ja = 2.0 * a * b / (a+b);
		cout << ja << " 입니다. \n";
		cout << "입력 받는 두 수중 하나가 0이 될때 까지 쌍으로 입력을 받으세요";
		cin >> a >> b;
		

	}
	return ja;


}

int re_score()
{
	int golf[Max];
	int cnt = 0;
	int b = 0;
	
	int size = fill_array(golf, Max);
	show_array(golf, size);
	int average = account_array(golf, size);
	cout << "입력 한 값의 평균은 " << average << endl;

	return 0;
}


int fill_array(int golf[], int Max)
{
	int i;
	int temp;
	for (i = 0; i < 10; i++)
	{
		cout << (i+1) << "번의 골프 점수: ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while (cin.get() !='\n')
				continue;
			cout << "입력을 종료합니다.\n";
			break;
		}
		else if (temp < 0)
			break;
		golf[i] = temp;
	}
	return i;
}

void show_array(int golf[], int size)
{
	for (int i =0; i < size; i++)
	{
		cout << (i+1) << "의 점수는 : ";
		cout << golf[i] << ", ";
	}
}

int account_array(int golf[], int size)
{
	int total = 0;

	for (int i = 0; i < size; i++)
		total += golf[i];

	return total/size;
}

void print_box(box ps)
{
	cout << "이제 출력하자^^ \n";
	cout << ps.maker << endl;
	cout << ps.height << endl;
	cout << ps.width << endl;
	cout << ps.length << endl;
	cout << ps.volume << endl;
}

void cal_box(box *pa)
{
	cout <<  "높이는 " << pa -> height << endl;
	//float w
	pa -> volume = pa -> height *  pa -> width *pa -> length;
	cout << "부피는 " << pa ->volume << "입니다.\n";
}

void lotto()
{
	double total, choices;
	double v_total;
	cout << "전체 수의 개수와 뽑을 수의 개수를 입력하십시오:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "당신이 이길 확률은";
		cout << probability(total,choices);	//승률을 계산한다.
		v_total *= probability(total, choices);
		cout << "번 중에서 한번 입니다.\n";
		cout << "다시 두 수를 입력하시오 (끝내려면 q를입력): ";
	}
	cout << "변형된 로또 확률은 " << v_total << endl;
	cout << "프로그램을 종료합니다. \n";
}

//이 함수는 number개의 수 중에서
// pick개의 수를 정확하게 뽑을 확률을 계산한다.
long double probability(unsigned numbers, unsigned picks)
{
	long double result =1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n/p;
	return result;
}

void factorial()
{
	
	cout << "매개변수를 입력해주세요(q를 누르면 종료됩니다.):";
	int n;
	while(cin >> n)
	{
		cout << n<< "에대한 factorial은" ;
		cout << r_factorial(n) << "입니다. \n";
		cout << "매개변수를 입력해주세요" ;
	}



}
double r_factorial(int n)
{	
	int total = 0;
	if (n < 2)
		return n;		
	else
		return n * r_factorial(n-1);

}

double Fill_array(double name[], double n)
{
	int i = 0;
	double temp;
	cout << "배열에 저장할 double형 값을 입력하라: ";
	while (cin >> temp)
	{
		name[i] = temp;
		cout << "배열에 저장할 double형 값을 입력하라: ";
		i+=1;
		
	}
	return i;
}

void Show_array(double name[], double n)
{
	for (int i = 0; i < n; i++){
		cout << name[i];
		cout << " ";
	}
}

double Reverse_array(double name[], double n)
{
	for (int i = n-1; i > 0; i--)
	{
		cout << name[i] << " ";	
	}
	
}

void arr_fun()
{
	double r_array[10];
	
	cout << "일단 입력부터 받을게요~" << endl;
	double size = Fill_array(r_array, 10);
	Show_array(r_array, size);
	cout << '\n' << r_array[0] << ", ";
	cout << Reverse_array(r_array, size) << endl;
}

