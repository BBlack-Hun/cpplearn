// mytime0.cpp -- Time 클래스의 매서드 구현

#include<iostream>
#include "mytime0.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

Time::~Time()
{
     std::cout << "응 끝났어\n";
}

void Time::AddMin(int m)
{
    minutes +=m;
    hours += minutes /60;
    minutes %= 60;
}


void Time::AddHr(int h)
{
    hours +=h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::Sum(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.hours / 60;
    sum.minutes %=60;
    return sum;
}

void Time::Show() const
{
    std::cout << hours << "시간, " << minutes <<"분";
}
