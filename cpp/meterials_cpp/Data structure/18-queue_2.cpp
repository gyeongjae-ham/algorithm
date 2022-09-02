#include <bits/stdc++.h>

//* 보통 queue는 아래와 같이 size()와 같이 쓰임
//* pop을 하게 되면 size가 작아지고 0ㅇ 되면 while문 종료

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    for (int i = 1; i <= 10; i++)
        q.push(i);

    while (q.size()) {
        cout << q.front() << "\n";
        q.pop();
    }

    return 0;
}