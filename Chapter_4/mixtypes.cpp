//mixtypes.cpp -- 일종의 형태 혼합
#include<iostream>

using namespace std;

struct antarctica_years_end
{
	int year;
	/* some really interesting data, etc. */
};

int main()
{
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	antarctica_years_end * pa = &s02;
	pa ->year = 1999;
	antarctica_years_end trio[3];
	trio[0].year = 2003;
	cout << trio -> year << endl;
	const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
	cout << arp[1] -> year << endl;
	const antarctica_years_end ** ppa = arp;
	//더블 포인터(이중 포인터)
	cout << (*ppa) -> year << endl;
	cout << (*(ppa +1)) -> year << endl;
	return 0;
}
