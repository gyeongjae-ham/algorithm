#include <bits/stdc++.h>

//* 함수인자로 전달해서 변수 수정하기

using namespace std;

void b(int a) { a = 2; }

void b2(int& a) { a = 2; }

void b3(int* a) { *a = 2; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a = 1;

  b(a);
  cout << a << "\n";  //? 안바뀐다

  b2(a);
  cout << a << "\n";

  b3(&a);
  cout << a << "\n";

  return 0;
}

// 참조값의 값 또는 주소값의 값을 변경해야 한다