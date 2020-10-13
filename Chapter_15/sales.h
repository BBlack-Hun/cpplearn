// sales.h -- 예외와 상속
#include <stdexcept>
#include <string>

class Sales
{
    public:
        enum {MONTHS =12};
        class bad_index : public std::logic_error
        {
            private:
                int bi;
            public:
                explicit bad_index(int ix, const std::string & s = "Sales 객체에서 인덱스 에러\n");
                int bi_val() const { return bi; }
                virtual ~bad_index() throw() { }
        };
        explicit Sales(int yy =0 );
        Sales(int yy, const double * gr, int n);
        virtual ~Sales() { }
        int Year() const { return year; }
        virtual double operator[] (int i) const;
        virtual double & operator[](int i);
    private:
        double gross[MONTHS];
        int year;
};

class LabeledSales : public Sales
{
    public:
        class nbad_index : public Sales::bad_index
        {
            private:
                std::string lb1;
            public:
                nbad_index(const std::string & lb, int ix, const std::string & s = "LabeleSales 객체에서 인덱스 에러\n");
                const std::string & label_val() const { return lb1; }
                virtual ~nbad_index() throw() { }
        };
        explicit LabeledSales(const std::string & lb = "없음", int yy = 0);
        LabeledSales(const std::string & lb, int yy, const double * gr, int n);
        virtual ~LabeledSales() { }
        const std::string & Label() const { return label; }
        virtual double operator[](int i) const;
        virtual double & operator[] (int i );
    private:
        std::string label;
};