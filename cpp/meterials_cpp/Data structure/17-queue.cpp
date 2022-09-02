#include <bits/stdc++.h>

//* 큐는 먼저 집어넣은 데이터가 먼저 나오는 자료구조
//* 나중에 넣은 데이터가 먼저 나오는 스택의 반대
//* 삽입, 삭제에 O(1), 탐색에 O(N)
//* 주로 BFS에 쓰인다. 선입선출구조(FIFO)로써 사용됨

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    q.push(1);
    cout << q.front() << "\n";

    q.pop();
    cout << q.size() << "\n";

    return 0;
}