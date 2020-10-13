// stack.cpp -- Stack 클래스의 맴버 함수들
#include "stack.h"
#include<iostream>
Stack::Stack()                                  // 비어 있는 스택을 생성한다.
{
    top = 0;
}

Stack::~Stack()
{
    std::cout << "스택은 없어졌습니다.^^\n";
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
    {
        return false;
    }
    
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
    {
        return false;
    }
    
}
