#include <bits/stdc++.h>

using namespace std;

//* map을 순회할 때는 key값을 first, value값을 second로 탐색이 가능하다

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  map<string, int> _map;

  _map["댕동"]++;
  _map["댕동"]++;

  for (auto c : _map) {
    cout << c.first << " : " << c.second << "\n";
  }

  return 0;
}