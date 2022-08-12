#include <bits/stdc++.h>

using namespace std;

// cout
// cout << 출력할 것 <<"\n"해서 하는게 일반적
// 저렇게 한줄 띄어쓰기를 넣어도 되고 답이 한칸띄어쓰기를 원한다면 cout << "출력할 것" << " "; 이렇게 넣어도 된다. 
// 문자열 출력에는 보통 cout을 써서 하는 것이 좋습니다.

typedef long long ll;
double a = 1.23456789;

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  cout << a << "\n";
  cout.precision(7); // 소수 부분 6자리까지 출력
  cout << a << "\n";
  return 0;
}