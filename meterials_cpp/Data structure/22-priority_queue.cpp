#include <bits/stdc++.h>

//* 우선 순위 큐, 내부구조는 heap으로 구현되어 있다.
//* 주로 다익스트라, 그리디 등에 쓰인다
//* greater를 써서 오름차순, less를 써서 내림차순

using namespace std;
priority_queue<int, vector<int>, greater<int>> pq; // 오름차순
// priority_queue<int, vector<int>, less<int>> pq;   // 내림차순

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  pq.push(5);
  pq.push(4);
  pq.push(3);
  pq.push(2);
  pq.push(1);
  cout << pq.top() << "\n";
  return 0;
}