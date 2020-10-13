//fun_ptr.cpp -- 함수를 지시하는 포인터
#include<iostream>

using namespace std;

double gildong(int);
double moonsoo(int);

// 두 번째 매개변수는 int형을 매개변수로 취하는
// double형 함수를 지시하는 포인터
void estimate(int lines, double (*pf)(int));

int main()
{
    int code;

    cout << "필요한 코드의 행 수를 입력하시오: ";
    cin >> code;
    cout << "홍길동의 시간 예상: \n";
    estimate(code, gildong);
    cout << "박문수의 시간 예상:\n";
    estimate(code, moonsoo);
    return 0;
}

double gildong(int lns)
{
    return 0.05 * lns;
}

double moonsoo(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int)) //매개변수로 정수형 값과 함수(인풋)를 입력 받는다.
{
    cout << lines << "행을 작성하는데 ";
    cout << (*pf)(lines) << "시간이 걸립니다. \n"; //함수를 호출하는 라인, 매게변수로 int 값이 들어간다.
}
