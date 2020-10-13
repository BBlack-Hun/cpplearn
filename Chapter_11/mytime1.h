// mytime1.h -- Time 클래스(연산자 오버로딩 후)
#ifndef  MYTIME1_H_
#define MYTIME1_H_

#include<string>

class Time
{
    private:
        std::string name;
        int hours;
        int minutes;
    public:
        Time();
        Time(std::string n, int h, int m = 0);
        ~Time();
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0, int m = 0);
        Time operator+(const Time & t) const;
        void Show() const;
};

#endif 