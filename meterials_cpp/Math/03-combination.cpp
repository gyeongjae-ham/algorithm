#include <bits/stdc++.h>

//* 조합에서는 순서가 없다
//* 그저 몇 명을 뽑을 것인가에 쓴다
//* 조합 공식 = n! / r!(n-r)!
//* 재귀함수 이용하는 방식

using namespace std;

int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};

void print(vector<int> b) {
  for (int i : b) cout << i << " ";
  cout << "\n";
}

void combi(int start, vector<int> b) {
  if (b.size() == k) {
    print(b);
    return;
  }

  for (int i = start + 1; i < n; i++) {
    b.push_back(i);
    combi(i, b);
    b.pop_back();
  }
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> b;
  combi(-1, b);
  return 0;
}