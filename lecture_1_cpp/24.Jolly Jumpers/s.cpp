#include <bits/stdc++.h>

using namespace std;
int n, num, pre, pos;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  vector<int> ch(n);
  cin >> pre;
  for (int i = 1; i < n; i++) {
    cin >> num;
    pos = abs(pre - num);

    if (pos > 0 && pos < n && ch[pos] == 0)
      ch[pos] = 1;
    else {
      cout << "NO"
           << "\n";
      return 0;
    }

    pre = num;
  }

  cout << "YES"
       << "\n";

  return 0;
}