#include <bits/stdc++.h>

using namespace std;
int n, a, b;
vector<int> va, vb;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    va.push_back(a);
  }
  for (int i = 0; i < n; i++) {
    cin >> b;
    vb.push_back(b);
  }

  for (int i = 0; i < va.size(); i++) {
    if (va[i] == vb[i])
      cout << "D"
           << "\n";
    else if ((va[i] - vb[i] == 1) || (va[i] - vb[i] == -2))
      cout << "A"
           << "\n";
    else
      cout << "B"
           << "\n";
  }

  return 0;
}