#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  double ret = 2.12345;
  int n = 2;
  int a = (int)round(ret / double(n));
  cout << a << "\n";
  return 0;
}

// 앞에서 선언해주면 된다
// 같은 타입끼리 연산 하는 것이 중요하다, 순서나 타입간의 관계에 따라 결정되는 걸 생각하느니 타입을 맞춰서 연산해 주자
