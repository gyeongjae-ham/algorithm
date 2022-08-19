#include <bits/stdc++.h>

using namespace std;
int n, num, pre, now;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  cin >> pre;

  int cnt = 1;
  int max = 1;
  for (int i = 0; i < n - 1; i++) {
    cin >> num;
    if (pre <= num) {
      cnt++;
    } else {
      if (cnt > max) {
        max = cnt;
      }
      cnt = 1;
    }

    pre = num;
  }

  cout << max << "\n";

  return 0;
}