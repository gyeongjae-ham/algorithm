#include <bits/stdc++.h>

using namespace std;
vector<int> v;
int n, a;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }

  int min_a = *min_element(v.begin(), v.end());
  int max_a = *max_element(v.begin(), v.end());

  cout << max_a - min_a << "\n";

  return 0;
}