//leftover.cpp  -- left() 함수의 오버로딩

#include<iostream>
using namespace std;
unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main()
{
    char * trip = "Hawaii!!";
    unsigned long n = 12345678;
    int i ;
    char *temp;

    for (i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete [] temp;
    }

    return 0;

}

// 이 함수는 정수 num의 앞에서 부터 ct개의 숫자를 리턴한다.
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if (ct ==0 || num == 0)
    {
        return 0;                   // 숫자가 없으면 0을 리턴한다.
    }
    while (n /= 10)
        digits++;
    if (digits > ct)
    {
        ct = digits - ct;
        while (ct--)
            num /= 10;
        return num;                 //남아았는 ct개의 숫자를 리턴한다.
    }
    else                            // 'ct >= 전체 숫자 개수'이면
    {
        return num;                 // 그 정수 자체를 리턴한다.
    }
    

}


// 이 함수는 str 문자열의 앞에서부터 n개의 문자를 취하여
// 새로운 문자열을 구성하고, 그것을 지시하는 포인터를 리턴한다.
char * left(const char * str, int n)
{
    if (n < 0)
        n = 0;
    char * p = new char[n+1];
    int i;
    for (i = 0; i < n && str[i]; i ++)
        p[i] = str[i];              //문자들을 복사한다.
    while (i <=n)
        p[i++] = '\0';
    return 0;
    
}
