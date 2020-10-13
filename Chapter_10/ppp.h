// ppp.h -- 일단 연습용 ㅎㅎ

#ifndef PPP_H_
#define PPP_H_

#include<string>

class ppp
{
    private:
        char name;
        std::string adrr;
        double balance;
    public:
        ppp();                                  // 생성자
        ppp(const char *client, const std::string num, double bal = 0.0);
        ~ppp();                                 // 파괴자


};


#endif