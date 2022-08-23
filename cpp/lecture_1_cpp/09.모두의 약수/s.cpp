#include <bits/stdc++.h>

using namespace std;
map<int, int> m;
int n;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 1; i <= 8; i++) {
    m.insert({i, 0});
  }

  cin >> n;

  //* 이렇게 풀면 제한 시간 내 통과 불가
  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= i; j++) {
  //     if (i % j == 0) {
  //       m[i]++;
  //     }
  //   }
  // }

  //* 해당 범위의 모든 약수를 구하는게 아니라 해당 범위 내에서
  //* 어떤 숫자들이 약수가 될 지 생각 전환해서 풀기
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j = j + i) {
      m[j]++;
    }
  }

  for (auto r : m) {
    cout << r.second << " ";
  }
  cout << "\n";
  return 0;
}