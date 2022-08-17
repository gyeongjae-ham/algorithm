#include <bits/stdc++.h>

//* 위의 작은 수처럼 풀면 제한 시간 내 풀지 못한다
//* 1의 자리 숫자의 개수는 9개 2자리 수 숫자는 90개 ...
//* 위 규칙을 적용해서 풀어야 한다

using namespace std;
int n, sum = 0, cnt = 9, d = 1, res = 0;
/*
n: 입력값
sum: 지금까지 센 숫자 개수
cnt: 지금 자리의 수의 개수
d: 자릿 수
res: 지금까지 센 숫자의 자릿수의 총 개수
*/
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  while (sum + cnt < n) {
    res = res + (cnt * d);
    sum = sum + cnt;
    d++;
    cnt *= 10;
  }
  res = res + ((n - sum) * d);  //* 중간에 빠져나온 자릿수에 현재까지 세고
                                //* 남은 숫자의 개수를 곱해준다

  cout << res << "\n";

  return 0;
}