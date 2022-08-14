#include <bits/stdc++.h>

//* 최대공약수

using namespace std;

int gcd(int a, int b) {
  if (a == 0) return b;
  return gcd(b % a, a);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int c = 25;
  int d = 170;

  cout << gcd(c, d);

  return 0;
}