#include <bits/stdc++.h>

using namespace std;

// * 벡터(vector)는 동적으로 요소를 할당할 수 있는 동적 배열이다.
// * 컴파일 시점에 개수를 모른다면 vector를 써야 한다
// * 또한 중복을 허용하고, 순서가 있고, 랜덤 접근이 가능하다
// * 탐색과 맨 뒤의 요소를 삭제하거나 삽입하는데 O(1)이 걸린다
// * 맨뒤나 맨앞이 아닌 요소를 삭제하고 삽입하는데 O(n)이 걸린다

vector<int> v;
vector<int> v2(5, 100);  // 크기 5인 vector를 선언하고 100으로 채운 모습

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 1; i <= 10; i++) v.push_back(i);
  for (int a : v) cout << a << " ";
  cout << "\n";
  v.pop_back();

  for (int a : v) cout << a << " ";
  cout << "\n";

  v.erase(v.begin(), v.begin() + 1);

  for (int a : v) cout << a << " ";
  cout << "\n";

  auto a = find(v.begin(), v.end(), 100);
  if (a == v.end())
    cout << "not found"
         << "\n";

  fill(v.begin(), v.end(), 10);

  for (int a : v) cout << a << " ";
  cout << "\n";

  v.clear();
  cout << "아무것도 없을까?\n";

  for (int a : v) cout << a << " ";
  cout << "\n";

  return 0;
}

// * 뒤부터 요소를 더하는 push_back(), 맨 뒤부터 지우는 pop_back()
// * 지우는 erase, 요소를 찾는 find(algorithm 함수)
// * 배열을 초기화 하는 clear()