// queue.cpp -- Queue와 Customer 메서드들
#include "queue.h"
#include <cstdlib>

//Queue 메서드들
Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

Queue::~Queue()
{
    Node * temp;
    while (front != NULL)                       // 큐가 아직 비어있지 않다면
    {
        temp = front;                           // 머리 항목의 주소를 임시로 저장한다.
        front = front -> next;                  // front를 그 다음 항목으로 다시 설정한다.
        delete temp;                            // 이전의 머리 노드를 삭제한다.
    }
}

bool Queue::isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::queueconunt() const
{
    return items;
}

// 큐에 항목을 추가한다.
bool Queue::enqueue(const Item & item)
{
    if (isfull())
        return false;
    Node * add = new Node;                      // 노드를 생성한다.
    // 실패하면,  new는 std::bad_alloc exception이 발생시킨다.
    add -> item = item;
    add -> next = NULL;
    items++;
    if (front == NULL)                          // 큐가 비어 있으면
        front = add;                            // 항목을 머리에 넣는다.
    else
        rear -> next = add;                     // 그렇지 않으면 꼬리에 넣는다.
    
    rear = add;                                 // rear가 새 노드를 지시하게 만든다.
    return true;

}

// 머리 항목을 item 변수에 넣고 큐에서 삭제한다.
bool Queue::dequeue(Item & item)
{
    if (front == NULL)
        return false;
    item = front-> item;                        // 큐의 머리 항목을 item에 복사한다.
    items--;
    Node * temp = front;                        // 머리 항목의 위치를 임시로 저장한다.
    front = front -> next;                      // front를 그 다음 항목으로 다시 설정한다.
    delete temp;                                // 이전의 머리 항목을 삭제한다.
    if (items == 0)
        rear == NULL;
    return true;
    
}

// Customer 메서드

// when은 고객이 도착한 시간이다.
// 도착시간은 when으로 설정된다.
// 처리 시간은 1, 2, 3 중에서 무작위 한 값이 설정된다.
void Customer::set(long when)
{
    processtime = std::rand() % 3 +1;
    arrive = when;
}