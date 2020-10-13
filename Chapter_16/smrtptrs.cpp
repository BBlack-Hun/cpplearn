// smrtptrs -- 세개의 스마트 포인터들을 사용

// C+11 shared_ptr과 unique_ptr 클래스를 자원해야함
#include <iostream>
#include <string>
#include <memory>

class Report
{
    private:
        std::string str;
    public:
        Report(const std::string s) : str(s) { std::cout << str << "객체가 생성되었습니다!\n";}
        ~Report() { std::cout << "객체가 삭제되었습니다!\n"; }
        void comment() const { std::cout << str << "\n"; }
};

int main()
{
    {
        std::auto_ptr<Report> ps (new Report("auto_ptr"));
        ps -> comment(); // 맴버 함수를 적용하기 위해 -> 사용
    }
    {
        std::shared_ptr<Report> ps (new Report("shared_ptr"));
        ps -> comment();
    }
    {
        std::unique_ptr<Report> ps (new Report("unique_ptr"));
        ps -> comment();
    }
    return 0;


}
