#include <bits/stdc++.h>

//* begin()은 해당 리스트 처음 요소의 주소값
//* end()는 해당 리스트 마지막 요소보다 한칸 뒤 주소값

using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> a;
  for (int i = 1; i <= 3; i++) a.push_back(i);
  for (int i = 5; i <= 10; i++) a.push_back(i);
  cout << lower_bound(a.begin(), a.end(), 4) - a.begin() << "\n";
  return 0;
}

//? 4가 없는 배열에서 4를 찾았더니 4의 이상인 첫번째 지점을 반환해준다