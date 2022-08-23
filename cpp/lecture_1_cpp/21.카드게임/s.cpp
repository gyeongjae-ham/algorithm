#include <bits/stdc++.h>

using namespace std;
int a[12], b[12], lw = 0, an, bn, ac = 0, bc = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < 10; i++) {
    cin >> an;
    a[i] = an;
  }

  for (int i = 0; i < 10; i++) {
    cin >> bn;
    b[i] = bn;
  }

  for (int i = 0; i < 10; i++) {
    if (a[i] > b[i]) {
      ac += 3;
      lw = 1;
    } else if (a[i] < b[i]) {
      bc += 3;
      lw = 2;
    } else if (a[i] == b[i]) {
      ac += 1;
      bc += 1;
    }
  }

  if (ac > bc) {
    cout << ac << " " << bc << "\n";
    cout << "A"
         << "\n";
  } else if (bc > ac) {
    cout << ac << " " << bc << "\n";
    cout << "B"
         << "\n";
  } else if (ac == bc) {
    if (lw == 1) {
      cout << ac << " " << bc << "\n";
      cout << "A"
           << "\n";
    } else if (lw == 2) {
      cout << ac << " " << bc << "\n";
      cout << "B"
           << "\n";
    } else if (lw == 0) {
      cout << ac << " " << bc << "\n";
      cout << "D"
           << "\n";
    }
  }

  return 0;
}