#include <bits/stdc++.h>

using namespace std;

struct Point {
  int y, x;
  Point(int y, int x) : y(y), x(x) {}
  Point() {
    y = -1;
    x = -1;
  }
  // bool operator<(const Point &a) const { return x > a.x; }
  bool operator<(const Point &a) const { return x < a.x; }
};

priority_queue<Point> pq;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  pq.push({1, 1});
  pq.push({2, 2});
  pq.push({3, 3});
  pq.push({4, 4});
  pq.push({5, 5});
  pq.push({6, 6});

  cout << pq.top().x << "\n";
  //? 출력해 보면 6이 아니라 1이 나온다
  //? 정의를 내림차순으로 했지만 우선순위 큐에는 반대로 넣어야 한다

  return 0;
}