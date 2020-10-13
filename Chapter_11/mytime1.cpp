// mytime1.cpp -- Time 클래스의 매서드 구현

#include<iostream>
#include "mytime1.h"

Time::Time()
{
    name = "no name";
    hours = minutes = 0;
}

Time::Time(std::string n, int h, int m)
{
    name = n;
    hours = h;
    minutes = m;
}

Time::~Time()
{
    std::cout << name << "아 잘가....!\n";
}

void Time::AddMin(int m)
{
    minutes +=m;
    hours += minutes / 60;
    minutes  %=60;
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

Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %=60;
    return sum;
}

void Time::Show() const
{
    std::cout << hours << "시간, " << minutes << "분";
}