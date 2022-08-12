#include <bits/stdc++.h>

using namespace std;

// * 입력이 계속 이어지다가 멈추는 경우

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  // ? 1번째 방법(scanf)
  while (scanf("%d", &n) != EOF) {
    cout << 1 << "\n";
  }

  // ? 2번째 방법(cin)
  while (cin >> n) {
    cout << 1 << "\n";
  }
}