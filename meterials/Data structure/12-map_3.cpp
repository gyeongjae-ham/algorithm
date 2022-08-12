#include <bits/stdc++.h>

//* map의 경우 해당 인덱스에 참조만 해도 맵에 값이 생긴다
//* int형의 경우 0으로, string의 경우 빈문자열로 들어간다

using namespace std;
map<int, int> mp;
map<string, string> mp2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cout << mp[1] << "\n";
  cout << mp2["aaa"] << "\n";

  for (auto i : mp) cout << i.first << " " << i.second;
  cout << "\n";
  for (auto i : mp2) cout << i.first << " " << i.second;

  return 0;
}