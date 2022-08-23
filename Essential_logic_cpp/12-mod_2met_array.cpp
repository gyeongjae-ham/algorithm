#include <bits/stdc++.h>

//* 2차원 배열을 넘겨서 수정하는 함수

using namespace std;

void b(int a[][5]) { a[0][4] = 44; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};

  b(a);
  cout << a[0][4] << "\n";

  return 0;
}