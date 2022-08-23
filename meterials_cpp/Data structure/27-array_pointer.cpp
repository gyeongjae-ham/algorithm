#include <bits/stdc++.h>

//* 배열의 이름은 배열의 주소값의 첫번째 주소를 가리킨다
//* 따라서 아래처럼 넘겨도 값들이 수정된다

using namespace std;

void go(int a[]) { a[2] = 100; }

int a[3] = {1, 2, 3};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  go(a);

  for (int i : a) cout << i << "\n";

  return 0;
}