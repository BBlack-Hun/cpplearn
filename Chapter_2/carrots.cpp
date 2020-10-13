//원래는 iostream안에 있는 std를 포함하여 std::cout으로 호출되어야 한다. 
//그렇기 때문에 using지시자를 사용하여, namespace로 std를 정의하면 std없이 cout만 사용 가능하다.
// C++에서는 \n이랑 endl이랑 같은 의미로 사용된다.
//하나의 번수를 사용하고 출력한다.

#include<iostream>

int main()
{
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "나는 당근을 ";
    cout << carrots;
    cout << "개 가지고 있다.";
    cout << endl;
    carrots = carrots -1;
    cout << "아삭아삭, 이제 당근은 " << carrots << "개이다." << endl;
    return 0;
}