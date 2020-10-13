// stock20.h -- 개정된 해더 파일

#ifndef STOCK20_H_
#define STOCK20_H_
#include<string>

class Stock
{
    private:
        std::string company;
        long shares;                        // 왜 책에는 int로 되어있지...??
        double share_val;
        double total_val;
        void set_tot() {total_val = shares * share_val;}
    
    public:
        Stock();                            // 디폴트 생성자
        Stock(const std::string &co, long n =0, double pr = 0.0);
        ~Stock();                           // 아무 일도 하지 않는 파괴자, 아무것도 정의를 해주지 않을거라서....
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show() const;
        const Stock & topval (const Stock & s) const;
};

#endif