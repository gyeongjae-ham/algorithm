#include <bits/stdc++.h>

using namespace std;
int n, l, t, cnt = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> l;
  int max = -2147000000;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t <= 90 && cnt == 0) {
      continue;
    } else if (t <= 90 && cnt != 0) {
      if (max < cnt) {
        max = cnt;
        cnt = 0;
      }
    } else if (t > 90) {
      cnt++;
    }
  }

  if (max == 0)
    cout << -1 << "\n";
  else
    cout << max << "\n";

  return 0;
}