#include <bits/stdc++.h>

//* 이터레이터는 컨테이너의 메모리 주소를 가리키는 데 사용
//* 주소값을 바로 반환하지 않는 포인터의 일종
//* 이터레이터의 함수 중 많이 쓰는 함수 : begin(), end()
//* begin(): 시작 위치를 반환
//* end(): 끝 + 1 의 위치를 반환

using namespace std;
vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i <= 5; i++)
        v.push_back(i);
    for (int i = 0; i < 5; i++) {
        cout << i << "번째 요소 : " << *(v.begin() + i) << "\n";
        cout << &*(v.begin() + i) << "\n";
    }
    // cout << v.begin() << '\n'; //에러
}
//? 바로 v.begin()으로 주소값을 출력하려고 하면 에러가 발생하는 것을 볼 수 있다.
//? 즉, 이터레이터는 바로 주소값을 반환하지 않아서 만약 이터레이터를 기반으로
//? 주소값을 출력하려면 &*를 통해 출력해야 하는 것을 볼 수 있다.