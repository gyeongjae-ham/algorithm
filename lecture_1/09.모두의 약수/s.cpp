#include <bits/stdc++.h>

using namespace std;
map<int, int> m;
int n;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 1; i <= 8; i++) {
    m.insert({i, 0});
  }

  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        m[i]++;
      }
    }
  }

  for (auto r : m) {
    cout << r.second << " ";
  }
  cout << "\n";
  return 0;
}