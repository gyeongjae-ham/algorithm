#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  string s = "123";
  s[0]++;
  cout << s << "\n"; // 223
  return 0;
}

// 위 코드에서 보면 123에서 s[0]에 1을 더해 223이 된 것을 알 수 있다
// 이는 아스키코드 49에서 1을 더한 값인 50을 가리키는 값이 2이기 때문에 223이 되는 것이다
// 즉, 문자열에서 +하는 연산은 "아스키코드"를 기반으로 수행된다

// 문자 변수는 C++ or C 에서는 해당 문자 자체가 아닌 아스키 값(0~127 사이의 정수)로 저장되어 구현된다
// 예를 들어 'A'는 ASCII 값이 65이다. 