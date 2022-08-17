#include <bits/stdc++.h>

using namespace std;
string s;
int tmp, res;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> s;

  int cnt = 0, max = 0;

  for (int i = 0; i < s.length(); i++) {
    tmp = count(s.begin(), s.end(), s[i]);
    if (tmp > max) {
      res = s[i] - '0';
    } else if (tmp == max) {
      if (res < (s[i] - '0')) {
        res = s[i] = '0';
      }
    }
  }

  cout << res << "\n";

  return 0;
}