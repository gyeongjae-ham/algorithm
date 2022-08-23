#include <bits/stdc++.h>

//* next_permutation - 오름차순 배열 기반 순열
//* prev_permutation - 내림차순 배열 기반 순열
//* 범위는 [first, last) 시작은 포함, 끝은 포함 x
//* 순열 공식 = n! / (n-r)!

using namespace std;

void printV(vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a[3] = {1, 2, 3};
  vector<int> v;
  for (int i = 0; i < 3; i++) v.push_back(a[i]);

  //? 오름차순 순열
  do {
    printV(v);
  } while (next_permutation(v.begin(), v.end()));
  cout << "================"
       << "\n";
  v.clear();

  for (int i = 2; i >= 0; i--) v.push_back(a[i]);

  do {
    printV(v);
  } while (prev_permutation(v.begin(), v.end()));

  return 0;
}