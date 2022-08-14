#include <bits/stdc++.h>

//* 중첩 for문으로 구현
//* r의 크기가 작은 경우 이렇게 구현한다

using namespace std;

int n = 5;
int k = 3;
int a[5] = {1, 2, 3, 4, 5};
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        cout << i << " " << j << " " << k << "\n";
      }
    }
  }

  return 0;
}