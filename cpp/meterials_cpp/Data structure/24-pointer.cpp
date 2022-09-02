#include <bits/stdc++.h>

/*
데이터의 주소값이란 해당 데이터가 저장된 메모리의 시작 주소를 말한다
주소값은 1바이트 크기의 메모리 공간으로 나누어 표현한다
주소연산자 &, 참조 연산자 *
주소연산자는 변수의 이름 앞에 사용하며, 해당 변수의 주소값을 반환한다
참조연산자는 포인터의 이름이나 주소 앞에 사용하여, 포인터에 저장된 주소에
저장되어 있는 값을 반환한다
*/

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a = "abcda";
    string *b = &a;
    cout << b << "\n";
    cout << *b << "\n";
    return 0;
}

//? (pointer_name) -> (variable_name) 이렇게 값을 꺼낼 수도 있고,
//? (*pointer_name).요소 이렇게 꺼낼 수도 있다