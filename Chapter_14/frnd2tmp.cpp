//trnd2tmp.cpp -- 테플릿이 아닌 프랜드를 가지는 템플릿 클래스
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class HasFriend
{
    private:
        T item;
        static int ct;
    public:
        HasFriend(const T & i) : item(i) { ct++; }
        ~HasFriend() { ct--; }
        friend void counts();
        friend void report(HasFriend<T> &);     // 템플릿 매개변수

};

// 각 특수화눈 자신만의 static 데이터 맴버를 가진다.
template <typename T>
int HasFriend<T>::ct = 0;

// 모든 HasFriend<T> 클래스에 대해 템플릿이 아닌 프렌드
void counts()
{
    cout << "int 카운트: " << HasFriend<int>::ct << "; ";
    cout << "double 카운트: " << HasFriend<double>::ct << endl;
}

// HasFriend<int> 클래스에 대한 템플릿이 아닌 프렌드
void report(HasFriend<int> & hf)
{
    cout << "HasFriend<int>: " << hf.item << endl;
}

// HasFriend<double> 클래스에 대한 템플릿이 아닌 프렌드
void report(HasFriend<double> & hf)
{
    cout << "HasFriend<double>: " << hf.item << endl;
}

int main()
{
    cout << "객체가 선언되지 않았다: ";
    counts();
    HasFriend<int> hfil(10);
    cout << "hfil 선언후: ";
    counts();
    HasFriend<int> hfi2(20);
    cout << "hfi2 선언후: ";
    counts();
    HasFriend<double> hfdb(10.5);
    cout << "hfdb 선언후: ";
    counts();
    report(hfil);
    report(hfi2);
    report(hfdb);

    return 0;
}