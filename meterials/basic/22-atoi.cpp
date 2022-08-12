#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s = "1";
  string s2 = "amumu";
  cout << atoi(s.c_str()) << "\n";
  cout << atoi(s2.c_str()) << "\n";
  return 0;
}

// 문자열을 int로 바꿔야 할 상황이 있을 때 입력받은 글자가 문자열인지 숫자인지 확인해야하는 로직이 필요한 경우 사용
// 입력받은 문자열이 문자라면 0 그게 아니라면 숫자를 반환한다