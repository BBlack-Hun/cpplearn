//assgn_st.cpp -- ����ü ����
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

	choice = bouquet;	//�� ����ü�� �ٸ� ����ü�� ����
	cout << "choice: " << choice.name << " for: $";
	cout << choice.price << endl;
	return 0;
}