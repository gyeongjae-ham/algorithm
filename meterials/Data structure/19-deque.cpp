#include <bits/stdc++.h>

//* 큐는 앞에서만 꺼낼 수 있지만 deque는 앞뒤 가능

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  deque<int> dq;

  dq.push_front(1);
  dq.push_back(2);
  dq.push_back(3);

  cout << dq.front() << "\n";
  cout << dq.back() << "\n";
  cout << dq.size() << "\n";

  dq.pop_back();
  dq.pop_front();

  cout << dq.size() << "\n";

  return 0;
}