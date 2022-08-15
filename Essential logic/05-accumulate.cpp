#include <bits/stdc++.h>

using namespace std;
//* 배열의 합J

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum = accumulate(v.begin(), v.end(), 0);
  cout << sum << "\n";
}