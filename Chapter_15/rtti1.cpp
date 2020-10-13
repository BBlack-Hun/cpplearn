// rtti1.cpp -- RTTI dynamic_cast  연산자를 사용한다.
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

class Grand
{
    private:
        int hold;
    public:
        Grand(int h = 0) : hold(h) { }
        virtual void Speak() const { cout << "나는 Grand 클래스이다.!\n"; }
        virtual int Value() const { return hold; }
};

class Superb : public Grand
{
    public:
        Superb(int h = 0) : Grand(h) { }
        void Speak() const { cout << "나는 Superb 클래스이다. \n"; }
        virtual void Say() const { cout << "내가 가지고 있는 Superb 값은 " << Value() << "이다!!\n"; }
};

class Magnificent : public Superb
{
    private:
        char ch;
    public:
        Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) { }
        void Speak() const { cout << "나는 magnificent 클래스이다!!!\n"; }
        void Say() const { cout << "내가 가지고 있는 문자는 " << ch << "이고, 정수는 " << Value() << "이다\n"; }
};

Grand * GetOne();

int main()
{
    std::srand(std::time(0));
    Grand * pg;
    Superb * ps;
    for (int i = 0; i < 5; i++)
    {
        pg = GetOne();
        pg -> Speak();
        if (ps = dynamic_cast<Superb *>(pg))
            ps -> Say();
    }
    return 0;
}

Grand * GetOne()            // 세종류의 객체 중의 한나를 임의로 생성한다.
{
    Grand * p;
    switch (std::rand() % 3)
    {
        case 0: p = new Grand(std::rand() % 100);
            break;
        case 1: p = new Superb(std::rand() % 100);
            break;
        case 2 : p = new Magnificent(std::rand() % 100, 'A' + std::rand() % 26);
            break;
    }
    return p;
}