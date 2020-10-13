//practise.cpp -- 프로그래밍 연습 파트

#include<iostream>

using namespace std;
void cmTm();
void calBMI();
void check_lat();
void time_trans();
void w_pop_u_pop();
void chkfuel();
void fuel_rans();

int main()
{
	//cmTm();
	//calBMI();
	//check_lat();
	//time_trans();
	//w_pop_u_pop();
	//chkfuel();
	fuel_rans();
	return 0;
}

void cmTm()
{
	cout << "키를 정수형 센티미터 단위로 입력하십시오:___\b\b\b";
	int cm;
	cin >> cm;
	const int m = cm / 100;
	const int s_m = cm % 100;
	cout << "입력 받은 키는 " << cm << "cm이고 이걸 m로 변환하면, " << m << "m " << s_m << "cm입니다." << endl;
	
}

void calBMI()
{
	int feet, inch, pounds;
	cout << "키를 feet와 inch로 나누어서 입력하여라: ";
	cin >> feet, cin >> inch;
	cout << "입력 받은 키는 " << feet << "\'-" << inch << "\"입니다." << endl;
	cout << "체중을 파운드 단위로 하여 입력해주세요: ";
	cin >> pounds;
	cout << "입력 받은 체중은 " << pounds << "파운드 입니다." << endl;
	
	cout << "feet로 받은 키 "<< feet << "를 inch로 변환하여 기존 inch에 더해줍니다.";
	inch += feet * 12;

	cout << "변환된 inch는 " << inch << "입니다." << endl;

	cout << inch << "inch를 다시 m 단위로 변환합니다." << endl;
	double m = inch * 0.0254;

	cout << "파운드로 입력받은 몸무게를 kg단위로 변환합니다." << endl;
	double kg = pounds / 2.2;

	cout << "BMI를 구하기 위해 kg단위의 질량을 m단위의 키의 제곱으로 나눠줍니다." << endl;
	double BMI = kg / (m * m);

	cout << "BMI 수치는 " << BMI << "입니다." << endl;

}

void check_lat()
{
	cout << "위도를 도, 분, 초 단위로 입력하시오: " << endl;
	int d, m, s;
	cout << "먼저, 도각을 입력하시오: ";
	cin >> d;
	cout << "다음에, 분각을 입력하시오: ";
	cin >> m;
	cout << "끝으로, 초각을 입력하시오: ";
	cin >> s;
	double a = double(s) / 3600+ double(m) / 60 + double(d);
	cout << d << "도, " << m << "분, " << s << "초 = " << a << "도" << endl;

}

void time_trans()
{
	long s;
	cout << "초 수를 입력하시오: ";
	cin >> s;
	int d = s / (3600 * 24);
	int h = (s % (3600 * 24)) / 3600;
	int m = ((s % (3600 * 24)) % 3600) / 60;
	int s_s = ((s % (3600 * 24)) % 3600) % 60;
	cout << d << "일, "<< h << "시간, " << m << "분, " << s_s << "초" << endl;
}

void w_pop_u_pop()
{
	long long w_pop, u_pop;
	cout << "세계 인구수를 입력하시오: ";
	cin >> w_pop;
	cout << "미국의 인구수를 입력하시오: ";
	cin >> u_pop;
	double im = double (u_pop) / double(w_pop)  *100;
	cout << "세계 인구수에서 미국이 차지하는 비중은 " << im << "%이다. " << endl;
}

void chkfuel()
{
	cout << "주행한 거리를 mile 단위로 입력하십시오: ";
	int mile;
	cin >> mile;
	cout << "소비한 휘발류를 gellon 단위로 입력하십시오: ";
	int gallon;
	cin >> gallon;
	float av1 = float (mile) / float (gallon);
	cout << "gellon당 갈 수 있는 거리는 " << av1 << "입니다." << endl;

	cout << "주행한 거리를 km 단위로 입력하십시오: ";
	int km;
	cin >> km;
	cout << "소비한 휘발류를 L 단위로 입력하십시오: ";
	int L;
	cin >> L;
	float km_L = float(L) / float(km) * 100;
	cout << "유럽 스타일로 100km당 리터수는 " << km_L << "입니다." << endl;
}

void fuel_rans()
{
	cout << "휘발류 소비량을 유럽식(100KM/L)로 입력하십시오: ";
	float eu_L;
	cin >> eu_L;
	float mile, gallon;
	cout << "변환중 " << endl;
	gallon = eu_L / 3.875; // L를 gallon으로 변환하는 중
	mile = 62.14; // mile / gallon을 위해 mile을 고정해줌,
	int mpg = mile / gallon;
	cout << "변환한 단위는 " << mpg << "mpg입니다." << endl;

	
}