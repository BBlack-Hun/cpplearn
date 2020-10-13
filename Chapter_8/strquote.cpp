//strquote.cpp  -- 서로 다른 설계
// 함수 내애서 참조를 사용하는 경우, 함수가 새로운 객체를 만들 필요가 없고, 옛객체에서 새로운 객체로 데이터를 복사할 필요가 없기
// 때문에 더 효율적이다. const 제한자를 사용한 것은 함수가 원래 문자열을 사용하되 변경하지 않는다는 뜻!

#include<iostream>
#include<string>

using namespace std;

string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);    //부수 효과
const string & version3(string& s1, const string &s2);      //나쁜 설계

int main()
{
    string input;
    string copy;
    string result;

    cout << "문자열을 입력하시오: ";
    getline(cin, input);
    copy = input;
    cout << "입력한 문자열: " << input << endl;
    result = version1(input, "***");
    cout << "바뀐 문자열: " << result << endl;
    cout << "원래 문자열: " << input << endl;

    result = version2(input, "###");
    cout << "바뀐 문자열: " << result << endl;
    cout << "원래 문자열: " << input << endl;

    cout << "원래 문자열 재설정\n";
    input = copy;
    result = version3(input, "@@@");
    cout << "바뀐 문자열: " << result << endl;  //사라진 값에 접근하려고 하기 때문에 오류가 발생한다.
    cout << "원래 문자열: " << input << endl;

    return 0;

}

string version1(const string &s1, const string &s2)
{
    string temp;            //지역적인 새로운 객체, 이는 함수가 종료될 때, 자신의 존재를 끝낸다. 만약 이를 참조로 사용했다면 동작하지 않는다. 
    temp = s2 + s1 + s2;
    return temp;            //반환자를 보면 참조로 동작하지 않기 때문에 원본이 바뀌지 않는다.
}

const string & version2(string & s1, const string &s2)      //부수 효과
{ 
    s1 = s2 + s1 + s2;     //원본을 직접 참조해 오며, 그 값을 변경하기 때문에, 원본 값이 같이 변경된다.
    // 함수에 전달된 참조를 리턴하므로 안전하다.
    return s1;
}

const string & version3(string & s1, const string &s2)
{
    string temp;            //이 함수가 종료되면 사라지는 변수, 즉 임시저장도 되지 않는다.
    temp = s2 + s1 + s2;
    //지역변수에 대한 참조를 리턴하므로 안전하지 않다.
    return temp;            //반환되지 않으며 사라진다.
}