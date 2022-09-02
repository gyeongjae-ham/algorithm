#include <bits/stdc++.h>

//* 어떤 값을 함수로 넘겨서 변하게 만들고 싶을 땐 주소값을 넘겨야 한다
//* 그냥 값을 넘겼을 경우 값이 변하지 않는다

using namespace std;
int idx = 2;

void go(int &idx) { idx = 1; }

void go2(int idx) { idx = 100; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    go(idx);
    cout << idx << "\n";

    go2(idx);
    cout << idx << "\n";

    return 0;
}

//? 주소는 메모리의 위치
//? 변수에 기록된 값은 그 메모리에 기록된 값
//* 때문에 어떠한 함수를 기반으로 변화시키고 싶다면
//* 주소를 넘겨서 해당 메모리 위치로 들어가 변화시켜야 한다