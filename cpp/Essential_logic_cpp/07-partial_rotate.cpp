#include <bits/stdc++.h>

//* 배열의 일부분만 한 칸씩 앞으로 회전하는 로직
//* 그냥 위치를 하나씩 옮겨주면 된다

using namespace std;
vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 1; i <= 6; i++) v.push_back(i);
  int i = 1;
  int temp = v[i];
  v[i] = v[i + 1];
  v[i + 1] = v[i + 2];
  v[i + 2] = v[i + 3];
  v[i + 3] = temp;

  for (int i : v) cout << i << " ";

  return 0;
}