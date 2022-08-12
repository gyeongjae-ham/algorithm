#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  string a = "wow";
  a += " ";
  a += "fantastic";
  cout << a.size() << "\n";
  cout << a << "\n";
  return 0;
}

// 이 문자열은 각각의 문자 요소를 a[0], a[1] 배열처럼 접근할 수 있습니다. 문자열은 문자로 이뤄진 배열이기 때문
// 기존 값에 +=를 쓰면 더할 수 있으며 길이를 출력할 때는 size라는 메서드를 사용한다