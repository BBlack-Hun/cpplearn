//practise.cpp -- ���α׷��� ���� ��Ʈ

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
	cout << "Ű�� ������ ��Ƽ���� ������ �Է��Ͻʽÿ�:___\b\b\b";
	int cm;
	cin >> cm;
	const int m = cm / 100;
	const int s_m = cm % 100;
	cout << "�Է� ���� Ű�� " << cm << "cm�̰� �̰� m�� ��ȯ�ϸ�, " << m << "m " << s_m << "cm�Դϴ�." << endl;
	
}

void calBMI()
{
	int feet, inch, pounds;
	cout << "Ű�� feet�� inch�� ����� �Է��Ͽ���: ";
	cin >> feet, cin >> inch;
	cout << "�Է� ���� Ű�� " << feet << "\'-" << inch << "\"�Դϴ�." << endl;
	cout << "ü���� �Ŀ�� ������ �Ͽ� �Է����ּ���: ";
	cin >> pounds;
	cout << "�Է� ���� ü���� " << pounds << "�Ŀ�� �Դϴ�." << endl;
	
	cout << "feet�� ���� Ű "<< feet << "�� inch�� ��ȯ�Ͽ� ���� inch�� �����ݴϴ�.";
	inch += feet * 12;

	cout << "��ȯ�� inch�� " << inch << "�Դϴ�." << endl;

	cout << inch << "inch�� �ٽ� m ������ ��ȯ�մϴ�." << endl;
	double m = inch * 0.0254;

	cout << "�Ŀ��� �Է¹��� �����Ը� kg������ ��ȯ�մϴ�." << endl;
	double kg = pounds / 2.2;

	cout << "BMI�� ���ϱ� ���� kg������ ������ m������ Ű�� �������� �����ݴϴ�." << endl;
	double BMI = kg / (m * m);

	cout << "BMI ��ġ�� " << BMI << "�Դϴ�." << endl;

}

void check_lat()
{
	cout << "������ ��, ��, �� ������ �Է��Ͻÿ�: " << endl;
	int d, m, s;
	cout << "����, ������ �Է��Ͻÿ�: ";
	cin >> d;
	cout << "������, �а��� �Է��Ͻÿ�: ";
	cin >> m;
	cout << "������, �ʰ��� �Է��Ͻÿ�: ";
	cin >> s;
	double a = double(s) / 3600+ double(m) / 60 + double(d);
	cout << d << "��, " << m << "��, " << s << "�� = " << a << "��" << endl;

}

void time_trans()
{
	long s;
	cout << "�� ���� �Է��Ͻÿ�: ";
	cin >> s;
	int d = s / (3600 * 24);
	int h = (s % (3600 * 24)) / 3600;
	int m = ((s % (3600 * 24)) % 3600) / 60;
	int s_s = ((s % (3600 * 24)) % 3600) % 60;
	cout << d << "��, "<< h << "�ð�, " << m << "��, " << s_s << "��" << endl;
}

void w_pop_u_pop()
{
	long long w_pop, u_pop;
	cout << "���� �α����� �Է��Ͻÿ�: ";
	cin >> w_pop;
	cout << "�̱��� �α����� �Է��Ͻÿ�: ";
	cin >> u_pop;
	double im = double (u_pop) / double(w_pop)  *100;
	cout << "���� �α������� �̱��� �����ϴ� ������ " << im << "%�̴�. " << endl;
}

void chkfuel()
{
	cout << "������ �Ÿ��� mile ������ �Է��Ͻʽÿ�: ";
	int mile;
	cin >> mile;
	cout << "�Һ��� �ֹ߷��� gellon ������ �Է��Ͻʽÿ�: ";
	int gallon;
	cin >> gallon;
	float av1 = float (mile) / float (gallon);
	cout << "gellon�� �� �� �ִ� �Ÿ��� " << av1 << "�Դϴ�." << endl;

	cout << "������ �Ÿ��� km ������ �Է��Ͻʽÿ�: ";
	int km;
	cin >> km;
	cout << "�Һ��� �ֹ߷��� L ������ �Է��Ͻʽÿ�: ";
	int L;
	cin >> L;
	float km_L = float(L) / float(km) * 100;
	cout << "���� ��Ÿ�Ϸ� 100km�� ���ͼ��� " << km_L << "�Դϴ�." << endl;
}

void fuel_rans()
{
	cout << "�ֹ߷� �Һ��� ������(100KM/L)�� �Է��Ͻʽÿ�: ";
	float eu_L;
	cin >> eu_L;
	float mile, gallon;
	cout << "��ȯ�� " << endl;
	gallon = eu_L / 3.875; // L�� gallon���� ��ȯ�ϴ� ��
	mile = 62.14; // mile / gallon�� ���� mile�� ��������,
	int mpg = mile / gallon;
	cout << "��ȯ�� ������ " << mpg << "mpg�Դϴ�." << endl;

	
}