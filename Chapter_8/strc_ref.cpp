//strc_ref.cpp -- 구조체에 대한 참조

#include<iostream>
#include<string>
using namespace std;

struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);       //구조체를 변화시키지 않고 출력만 해주기 때문에 const 사용.
void set_pc(free_throws& ft);               //이 함수의 매개변수는 참조변수이므로, 주어진 변수에 대해 percent값을 구해준다.
                                            //이때는 set.percent 매개변수를 초기화하므로, 값으로 전달하는 것이 제대로 작동하지
                                            //않을 수 있다. --> 참조변수 대신 포인터 사용을 통해 해결 가능.
free_throws & accumulate(free_throws & target, const free_throws & cource);         //두개의 구조체를 매개변수로 가짐, 그리고 첫번쨰
                                                                                    //매개변수만 수정되므로 두번쨰 매개변수는 상수(const) 참조변수이다.
                                                                                    //

int main()
{
    // 부분 포기화 - 맴버는 0에 세팅된 상태로 남는다.
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"throwgoods", 0, 0};
    
    // 초기화하지 않음
    free_throws dup;
    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);

    // 리턴 값을 매개변수로 사용한다.
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);

    //리턴 값을 대입 값으로 사용한다.
    dup = accumulate(team, five);
    cout << "team 출력:\n";
    display(team);
    cout << "대입 이후 dup 출력:\n";
    display(dup);
    set_pc(four);

    //문제의 소지가 있는 대입
    accumulate(dup, five) = four;
    cout << "문제 소지가 있는 대입 이후 dup 출력:\n";
    display(dup);
    return 0;

}

void display(const free_throws & ft)
{
    cout << "Name: " << ft.name << '\n';
    cout << "Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << '\n';

}

void set_pc(free_throws & ft)
{
    if (ft.attempts != 0)
        ft.percent = 100.0f *float(ft.made)/float(ft.attempts);
    else
        ft.percent = 0;

}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}
