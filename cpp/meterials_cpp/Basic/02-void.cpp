#include <bits/stdc++.h>

using namespace std;
int ret = 1;

void a() {
    ret = 2;
    cout << ret << "\n" return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    a();
    return 0;
}

// a라는 함수가 ret을 바꾸고 아무것도 리턴하지 않고 있다.
// 이렇게 아무것도 리턴하지 않을 때 void를 쓴다