// stonewt.h -- Stonewt 클래스 정의
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};                // 스톤당 파운드 수, enum은 클래스용 상수를 정의하는 편리한 방법을 제공
                                                //클래스에서 사용할 정수들을 제공..
        int stone;                              // 정수부(스톤)
        double pds_left;                        // 소수부(스톤)
        double pounds;                          // 파운드로 나타낸 전체 무게
    public:
        Stonewt(double lbs);                    // double형 파운드를 위한 생성자
        Stonewt(int stn, double lbs);           // stone, lbs를 위한 생성자
        Stonewt();                              // 디폴트 생성자
        ~Stonewt();                             // 파괴자
        void show_lbs() const;                  // 파운드 형식으로 출력
        void show_stn() const;                  // 스톤과 파운드 조합 형식으로 출력
};

#endif