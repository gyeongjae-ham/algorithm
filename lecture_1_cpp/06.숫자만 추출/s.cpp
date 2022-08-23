#include <bits/stdc++.h>

using namespace std;
string s;
char a[100];
int re = 0, cnt = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> s;
  stpcpy(a, s.c_str());

  for (int i = 0; a[i] != '\0'; i++) {
    if (a[i] >= 48 && a[i] <= 57) {
      re = re * 10 + (a[i] - '0');
    }
  }

  cout << re << "\n";

  for (int i = 1; i <= re; i++) {
    if (re % i == 0) {
      cnt++;
    }
  }

  cout << cnt << "\n";

  return 0;
}