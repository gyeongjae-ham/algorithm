#include <bits/stdc++.h>

using namespace std;
int n, answer = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  cout << 1;

  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      cout << " + " << i;
      answer += i;
    }
  }

  cout << " = " << answer << "\n";
}