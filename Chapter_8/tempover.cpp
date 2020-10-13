//tempover.cpp
#include<iostream>

using namespace std;

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;

};

int main()
{
    int things[6] = {13,31,103,301,310,130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };

    double * pd[3];

    //포인터들을 배열 mr_E에 있는 구조체들의 amount 맴버로 설정한다.
    for (int i =0; i<3; i++)
        pd[i] = &mr_E[i].amount;
    
    cout << "mr. E 의 재산목록: \n";
    //things는 int형의 배열이다.

    ShowArray(things, 6);       // 템플릿 A를 사용한다.
    cout << "Mr. E 의 채무목록:\n";
    //pd는 double형을 지시하는 포인터들의 배열이다.
    ShowArray(pd, 3);           //더 특수한 템플릿 B를 사용한다.
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    cout << "템플릿 A\n";
    for (int i =0; i < n; i++)
    {
        cout << arr[i] << ' ';
        cout << endl;
    }
}

template <typename T>
void ShowArray(T *arr[], int n)
{
    cout << "템플릿 B\n";
    for (int i =0; i < n; i++)
        cout << *arr[i] << ' ';
        cout << endl; 
}