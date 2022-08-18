#include <bits/stdc++.h>

using namespace std;
int n, dt, sd;
vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> sd;

  for (int i = 0; i < n; i++) {
    cin >> dt;
    v.push_back(dt);
  }

  int sum = 0;
  for (int i = 0; i < sd; i++) {
    sum += v[i];
  }
  int max = sum;

  for (int i = sd; i < n; i++) {
    sum = sum + (v[i] - v[i - sd]);
    if (sum > max) max = sum;
  }

  cout << max << "\n";

  return 0;
}