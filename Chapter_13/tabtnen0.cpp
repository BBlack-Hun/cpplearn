// tabtenn0.cpp -- 간단한 기초 클랫스 메서드들
#include <iostream>
#include "tabtenn0.h"

TableTennisPlayer::TableTennisPlayer (const string &fn, const string & ln, bool ht) 
    : firstname(fn), lastname(ln), hasTable(ht) { }

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}