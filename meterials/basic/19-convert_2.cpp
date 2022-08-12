#include <bits/stdc++.h>

using namespace std;

// * 문자를 숫자로, 숫자를 문자로
// 아스키 코드를 이용해서 문자를 정수로 바꿀 수 있다

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  char a = 'a';
  cout << (int)a - 97 << "\n";
  cout << (int)a - 'a' << "\n"; // 둘 다 똑같이 동작한다
  return 0;  
}