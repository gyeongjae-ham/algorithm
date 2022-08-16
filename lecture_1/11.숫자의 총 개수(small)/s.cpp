#include <bits/stdc++.h>

using namespace std;
int n, tmp, cnt = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int i = 1; i <= n; i++) {
    tmp = i;
    while (tmp > 0) {
      tmp /= 10;
      cnt++;
    }
  }

  cout << cnt << "\n";

  return 0;
}