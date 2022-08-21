#include <bits/stdc++.h>

using namespace std;
int n, p;
vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> p;
    v.push_back(p);  // 선수들 vector에 담고
  }

  cout << "1 ";
  for (int i = 1; i < n; i++) {
    int cnt = 0;
    for (int j = i - 1; j >= 0; j--) {
      if (v[j] >= v[i]) cnt++;  // 자기보다 큰 숫자들 있으면 cnt를 늘려준 후
    }
    cout << cnt + 1 << " ";  // 자기 자신을 더해서 순위를 출력해준다
  }

  cout << "\n";
  return 0;
}