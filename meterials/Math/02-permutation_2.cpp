#include <bits/stdc++.h>

//* 재귀함수를 이용하는 방법
//* debug 찍어보면서 이해하자....어렵다;;

using namespace std;
int a[3] = {1, 2, 3};
vector<int> v;

void printV(vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

void makePermutation(int n, int r, int depth) {
  if (r == depth) {
    printV(v);
    return;
  }

  for (int i = depth; i < n; i++) {
    swap(v[i], v[depth]);
    makePermutation(n, r, depth + 1);
    swap(v[i], v[depth]);
  }
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < 3; i++) v.push_back(a[i]);
  makePermutation(3, 3, 0);
  return 0;
}