#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include <cstring>
#include <algorithm>
#include <random>
#include <unistd.h>

using namespace std;

// 캐시 노드의 패킷을 나타내기 위한 구조체..
struct Item {
    string key;
    int value;
    int byte;
    Item *prev; // 노드가 가르키는 이전 노드.
    Item *next; // 노드가 가리키는 다음 노드.
    Item(string k, int v, int b): key(k), value(v), byte(b){
        prev = NULL;    // 아무것도 안 가리키고 있다. (초기화)
        next = NULL;    // 아무것도 안 가리키고 있다. (초기화)
    }
};

// 캐시 클래스
class Cache {
public:
    virtual bool lookup(string key, int &val, int &byte) = 0;
    virtual void put(string key, int val, int byte) = 0;
};

// 캐시 클래스 두 함수를 사용하기 위해 실질적으로 사용하는 클래스이다. (LRU)
class FIFOCache : public Cache {
private:
    /* Doubly Linked List: Head - The most recent, Tail - The least recent */
    Item *head;     // 가장 최근에 참조된 아이템을 가리킴 (head -> next)
    Item *tail;     // 가장 오래전에 참조된 아이템을 가리킴 (tail -> prev)
    void detach(Item *item){ //Detach item from linked list : O(1), 링크드 리스트에서 item을 제거
        item->next->prev = item->prev;
        item->prev->next = item->next;
    };
    void push_front(Item *item){ //Add the new item at the front : O(1)
        item->next = head->next;
        head->next->prev = item;
        head->next = item;
        item->prev = head;
    };
    void pop_back(){ //delete item from the tail : O(1)
        Item *item = tail->prev;
        if(item != head){
            tail->prev = item->prev;
            delete item;
        }
        else {
            tail->prev = head;
        }
        tail->prev->next = tail;
    };
    bool back(string & key){ //Get the item from the tail: O(1)
        if(tail->prev == head){
            return false;
        }
        key = tail->prev->key;
        return true;
    };


    /* Hash Table */
    // Key와 value를 이용하여 탐색하기 위해서, 실질적으로는, Key 값만을 탐색, 존재 하는 경우, 그 다음에 value를 탐색.
    int MaxNumEntries;  // 캐시 사이즈~
    unordered_map<string, Item*> CacheEntries;
    
public:
    // 생성시, key 0, value 0으로 전부 초기화...  그렇지만,,, 0으로 lookup해보면 없음...
    FIFOCache(int num):MaxNumEntries(num){   
        //head <-> tail
        head = new Item("0", 0, 0);
        tail = new Item("0", 0, 0);
        head->next = tail;
        tail->prev = head;
    };
    ~FIFOCache(){
        // while문을 쓰는 이유, 그동안 생성 되었던, list를 다 지운다.
        while(head->next != tail){
            pop_back();
        }
        // 그리고 head와 tail이 남았을때, 삭제 ㅎㅎ new로 생성한 것에 대한 delete로 지움 ㅎㅎ
        delete head;
        delete tail;
    }
    bool lookup(string k, int &val, int &byte){
        /* find a matching item */
        // 변수 it을 선언해준다. map으로 구성되 있는 리스트에서 key값을 찾아 그 위치값을 넣는다.
        auto it = CacheEntries.find(k);
        if(it == CacheEntries.end()){ //not found, 못찾았을 경우, 즉, 탐색후 it가 끝을 가르키고 있는 경우?
            return false;   // 못찾을 경우 false로 리턴하면서, 이 함수를 종료.
        }
        val = (*it).second->value; //found, 발견 했을 경우, 그 노드가 가지고 있는, val값을 리턴해준다.
        byte = (*it).second -> byte; // 바이트를 추가한다.
        /* update linked list 
        detach((*it).second); //detach, 그 자리에서 지우고, 새로 맨 앞으로 가져온다.
        push_front((*it).second); //add to the head because this is the latest, 가장 최신으로 업데이트 한다.
        */
        return true;
    }
    // 기존의 패킷의 데이터를 입력 받는 put
    void put(string k, int val, int byte){
        /* find a matching item: O(1) operation */
        /* 사실 FIFO에서는 최신화를 시켜줄 필요가 없다. 그냥 계속 밀려나면 되는 것이다.*/
        // 먼저 Key 값을 탐색한다.
        /*
        auto it = CacheEntries.find(k);
        // 탐색에 성공한 경우...
        if(it != CacheEntries.end()){
            /* update data 
            // key값의 value를 업데이트 해주고, 최신화를 해준다.
            (*it).second->value = val;
            /* update linked list 
            detach((*it).second); //detach, 기존 위치에서 삭제.
            push_front((*it).second); //add to the head because this is the latest, 가장 최선의 위치로 바꿔준다.
            return;
        }
        */
        /* Add new one: O(1) operation */
        // 일단 캐시에서 key를 찾지 못햇을 경우이다.
        if(CacheEntries.size() != MaxNumEntries){ // 집어넣으려고 할떄, 캐시가 꽉 차지 않은 경우,
            // 새롭게 pair를 만들어준다. 그리고, list에 삽입한다.
            Item *t = new Item(k, val, byte);
            pair<string, Item *> entry(k, t);
            CacheEntries.insert(entry);
            push_front(t); // 가장 최신으로~
        } else { //Cache is full
            /* Select Victim & delete */
            // 캐시가 꽉 찼다, 그러므로, 하나를 삭제해야 하는데, 가장 오래된 것을 삭제해야 한다.(LRU)
            // 그러나 FIFO를 먼저 구현하기로 했으므로 rear에 있는 것을 삭제하면 된다.
            string key;
            /*------삭제 관련 로직--------*/
            back(key); //get the key of the oldest one
            pop_back();       //remove the oldest one
            auto rt = CacheEntries.find(key);
            if(rt != CacheEntries.end()){ //found
                CacheEntries.erase(rt); //delete
            }
            /*---------------------------------------*/
            // 이제 빈 공간에 새롭게 넣으려고 하는 값을 head로 넣는다.
            Item *t = new Item(k, val, byte);
            pair<string, Item *> entry(k, t);
            CacheEntries.insert(entry);
            push_front(t); //Latest one
        }
    }
    // 기존의 패킷의 데이터를 입력 받는 put
    

    void display()
    {
        cout << "{전체 항목 수 = " << CacheEntries.size() <<"}" << endl;
        Item *ptr;
        ptr = head;
        while (ptr != NULL) {
            cout << ptr -> key << "\n";
            ptr = ptr -> next;
        }
    }
};

class Requester 
{
    private:
        Item *r_packet[200];
        int random;
        
    public:
        Requester() {}
        ~Requester() {}
        // 파일을 읽어오고 파일의 내용을 가지고 패킷화 시킴....
        void Data_To_Packet() {
            /* 파일 오픈 - 읽기 */
            ifstream fin("/var/icngroup/jhkim95/cpplearn/demo/trace.txt");
            if(!fin) {
                cout << "파일오픈에러" << endl;
                return;
            }
            char buf[20];
            char *sArr[20];
            int i =0;
            int j =0;
            while(true) {
                fin.getline(buf, 20);
                char *ptr = strtok(buf, " ");
                while (ptr != NULL)
                {
                    sArr[i] = ptr;
                    i++;
                    ptr = strtok(NULL, " ");
                }
                r_packet[j]= new Item(sArr[0], atoi(sArr[1]), 0);
                if (fin.eof()) {
                    break;
                }
                i = 0;
                j++;
            }
            
            fin.close();
        };
        // 만들어진 패킷을 보여주는 함수
        void show_packet()
        {   
            Item *ptr;
            for (int i = 0; i < 200; i++)
            {
                ptr = r_packet[i];
                cout << "만들어진 패킷 ID: " << ptr -> key << "\n";
                cout << "만들어진 패킷 Value: "  << ptr -> value << "\n";
                cout << "만들어진 패킷 Byte: "  << ptr -> byte << "\n";
            }
            

        }
        Item send_packet()
        {
            random_device rd;
            mt19937_64 rng(rd());
            uniform_int_distribution<int64_t> cnt(0,834);
            //cout << "cnt값은? " << cnt(rng) << endl;
            int size = cnt(rng);
            Item *search_val;
            search_val= r_packet[size];
            //cout << "만들어진 패킷의 키와 벨류 값은 : " << search_val->key <<", "<< search_val -> value << endl; 
            return *search_val;
        }
};

class Provider
{
    private:
        Item *r_packet[200];
        int random;
        
    public:
        Provider() {}
        ~Provider() {}
        // 파일을 읽어오고 파일의 내용을 가지고 패킷화 시킴....
        void Data_To_Packet() {
            /* 파일 오픈 - 읽기 */
            ifstream fin("/var/icngroup/jhkim95/cpplearn/demo/trace.txt");
            if(!fin) {
                cout << "파일오픈에러" << endl;
                return;
            }
            char buf[20];
            char *sArr[20];
            int i =0;
            int j =0;
            while(true) {
                fin.getline(buf, 200);
                char *ptr = strtok(buf, " ");
                while (ptr != NULL)
                {
                    sArr[i] = ptr;
                    i++;
                    ptr = strtok(NULL, " ");
                }
                r_packet[j]= new Item(sArr[0], atoi(sArr[1]), 1);
                if (fin.eof()) {
                    break;
                }
                i = 0;
                j++;
            }
            
            fin.close();
        };
        // 패킷을 새롭게 만들어 (byte를 0 -> 1로 바꾼다.)
        Item receive_packet(string k, int v, int b){
            Item *receive_val;
            for (int i = 0; i < 4; i++) {
                Item *receive_val = r_packet[i];
                if (receive_val -> key == k && receive_val -> value == v)
                    return *receive_val;
            }
        }
};

/*
    시뮬레이션 내용....
    consumer가 패킷을 보내면(랜덤하게 보낸다.) 일단 cache 큐에는 아무것도 들어 있지 않기 떄문에, 처음에는, cache큐를 통과하여, producer에게 접근을 한다. 이때, byte 타입은 0에서 1로 바뀌게 된다. ( producer에게 갔기 때문에)
    이때 캐시 hit은 0, miss +=1, 그리고, 돌아오면서, 그 패킷들은 캐시큐에 저장이 되게 된다.
    즉, 이때부터는 재전송에 대한 내용들에 대해, 캐시 큐에서도 찾을 수 있게 된다.
    이떄 캐시 정책은 LRU(least recently unit) 무튼 가장 오래 된 것을 삭제하고, 새로운 패킷이 끝에서 부터 들어오게 된다.
    일단은 이것을 FIFO로 구현한 다음 다시 LRU로 구현 그다음에 LFU로 구현할 예정..


*/


int main(){
    string k;
    int v, b;
    int c_hit = 0;
    int c_miss = 0;
    Requester interest;
    Provider Data;
    Data.Data_To_Packet();
    interest.Data_To_Packet();  // 파일에서 데이터를 로드 및 패킷화
    //interest.show_packet();     // 만들어진 패킷 배열을 보여준다.
    int x = 0;
    int c_size;
    cout << "Cache size를 입력해주세요: ";
    cin >> c_size;
    FIFOCache cache(c_size);      // 캐시 노드를 생성 (FIFO 스타일~)
    while (x < 100){
        auto it = interest.send_packet();
        cout << "Key 값은: " << it.key << endl;
        
        
        //cache.put(it.key,it. value, it.byte);
        if (cache.lookup(it.key,it. value, it.byte)){
            cout << k << "있다. 반환해줄게...\n";
            c_hit++;
        } else {
            cout << "프로듀서에게 전달하도록 할게 ^^" << endl;
            c_miss++;
            auto dt = Data.receive_packet(it.key,it. value, it.byte);
            cache.put(dt.key, dt.value, dt.byte);
        }
        x++;
    }

    cout << "현재 큐에 남아 있는 데이터:\n";
    cache.display();
    cout << "Cache_hit 횟수: " << c_hit << endl;
    cout << "Cache_miss 횟수: " << c_miss << endl;

    return 0;
}