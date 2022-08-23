#include <bits/stdc++.h>

//* 최소공배수
//* 최소공배수 lcm은 (a*b / (a,b의 최대공약수))

using namespace std;

int gcd(int a, int b) {
  if (a == 0) return b;
  return gcd(b % a, a);
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a = 10, b = 12;
  cout << lcm(a, b) << "\n";

  return 0;
}