#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
double a = 1.23456789;
int b = 2;

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  printf("%.6lf\n", a);
  printf("%02d\n", b);
  // 1.234568
  // 02
  return 0;
}

// printf
// 형식을 지정해서 출력할 때 좋다. 문자열을 출력할 때는 보통 cout을 쓰는 것이 좋으며 c_str()를 통해 printf로도 출력이 가능 
// %다음에 오는 것으로 출력해야 할 변수의 유형을 정한다음에 출력할 수 있다. 예를 들어 문제에서 홍철 1 : 지수 2 이렇게 출력해라라고 한다면 printf( “홍철 %d : 지수 %d”, a, b)