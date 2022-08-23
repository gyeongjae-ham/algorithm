#include <bits/stdc++.h>

//* 10진법을 2진법으로 바꾸는 방법

using namespace std;
vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 100;
  int b = 2;

  while (n > 1) {
    v.push_back(n % b);
    n /= b;
  }

  if (n == 1) v.push_back(1);
  reverse(v.begin(), v.end());

  for (int a : v) {
    if (a >= 10)
      cout << char(a + 55);
    else
      cout << a;
  }

  return 0;
}

//* b의 값에 따라 변환하는 진법이 달라진다 3으로 하면 3진법