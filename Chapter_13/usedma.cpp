// usedma.cpp -- 상속, 프렌드, 동적 메모리 대입
//dma.cpp 와 컴파일한다.
#include <iostream>
#include "dma.h"

int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("mercator", "Buffalo Keys", 5);

    cout << "basdDMA 객체를 출력한다:\n";
    cout << shirt << endl;
    cout << "lacksDMA 객체를 출력한다: \n";
    cout << balloon << endl;
    cout << "hasdDMA 객체를 출력한다: \n";
    cout << map << endl;
    lacksDMA balloon2(balloon);
    cout << "lacksDMA 복사 결과: \n";
    cout << balloon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "hasDMA 대입 결과: \n";
    cout << map2 << endl;
    return 0;
}