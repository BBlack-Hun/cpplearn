//assgn_st.cpp -- 구조체 대입
#include<iostream>

using namespace std;

struct inflatable
{
	char name[20];
	float vloume;
	double price;
};

int main()
{
	inflatable bouquet{
		"sunflowers",
		0.20,
		12.49
	};

	inflatable choice;
	cout << "bouquet: " << bouquet.name << " for: $";
	cout << bouquet.price << endl;

	choice = bouquet;	//한 구조체를 다른 구조체에 대입
	cout << "choice: " << choice.name << " for: $";
	cout << choice.price << endl;
	return 0;
}