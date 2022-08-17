#include <bits/stdc++.h>

using namespace std;
int n, num, tmp, a;

int reverse(int x) {
  int res = 0;
  while (x > 0) {
    a = x % 10;
    res = res * 10 + a;
    x /= 10;
  }
  return res;
}

bool isPrime(int x) {
  if (x <= 1) return 0;
  if (x == 2) return 1;
  if (x % 2 == 0) return 0;

  for (int i = 2; i * i <= x; i++) {
    if (n % i == 0) return 0;
  }

  return 1;
}

// bool isPrime(int x) {
//   if (x == 1) return 0;
//   bool flag = 1;
//   for (int i = 2; i < x; i++) {
//     if (x % i == 0) {
//       flag = 0;
//       break;
//     }
//   }
//   return flag;
// }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  tmp = reverse(n);
  cout << typeid(tmp).name() << "\n";
  bool result = isPrime(tmp);
  cout << result << "\n";

  // for (int i = 0; i < n; i++) {
  //   cin >> num;
  //   tmp = reverse(num);
  //   if (isPrime(tmp)) cout << tmp << " ";
  // }
  // cout << "\n";
  return 0;
}