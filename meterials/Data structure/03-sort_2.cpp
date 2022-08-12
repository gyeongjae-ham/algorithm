#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> v;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 10; i >= 1; i--)
  {
    v.push_back({i, 10 - i});
  }

  sort(v.begin(), v.end());

  for (auto it : v)
    cout << it.first << " : " << it.second << "\n";

  return 0;
}

// * 먼저 따로 설정하지 않으면 first, second, third 순으로 차례차례 오름차순 정렬된다
// * for(auto it : v) cout<<it.first<<":" << it.second << "\n"; 이 부분은
// * for(pair<int,int> it : v로 할 수도 있다.
// ? auto는 형이 정해져 있지 않은 형을 말한다 pair<int, int> 보다 auto가 코드길이가 짧기 때문에 자료구조에 있는 값을 기반으로 순회할 때 사용하면 좀 더 빠르게 코드를 짤 수 있다
