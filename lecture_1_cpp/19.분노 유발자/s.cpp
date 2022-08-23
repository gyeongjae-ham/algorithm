#include <bits/stdc++.h>

using namespace std;
int n, st, cnt = 0;
vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> st;
    v.push_back(st);
  }

  int max = v[v.size() - 1];
  for (int i = v.size() - 2; i >= 1; i--) {
    if (v[i] > max) {
      max = v[i];
      cnt++;
    }
  }

  cout << cnt << "\n";

  return 0;
}