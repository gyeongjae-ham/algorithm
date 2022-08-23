#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> v;

// * 내림차순 정렬할 때
// * first는 내림차순, second는 오름차순으로 정렬하고 싶다면 커스텀 연산자를
// * 만들면 된다

bool cmp(pair<int, int> a, pair<int, int> b) { return a.first > b.first; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 10; i >= 1; i--) {
    v.push_back({i, 10 - i});
  }

  sort(v.begin(), v.end(), cmp);

  for (auto it : v) cout << it.first << " : " << it.second << "\n";

  return 0;
}