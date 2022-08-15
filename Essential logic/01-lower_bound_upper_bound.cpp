#include <bits/stdc++.h>

//* 정렬된 배열에서 어떤 값이 나오는 지점이나
//* 어떤 값이 나오기전의 위치를 반환
//* 이분탐색을 함수로 쉽게 구현

/*
lower_bound는 0번째 배열의 원소부터 찾아서 어떠한 값의 "이상이 되는 위치"를
반환한다.
upper_bound는 그 값이 시작되기 전의 위치를 반환한다

반환되는 값은 주소값이기 때문에 처음 주소값을 빼줘서 int형으로 몇번째인지 파악할
수 있다
*/

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> v;
  int a[5] = {1, 2, 2, 2, 3};
  for (int i = 0; i < 5; i++) {
    v.push_back(a[i]);
  }

  int x = 2;
  int c = (int)(upper_bound(v.begin(), v.end(), x) -
                lower_bound(v.begin(), v.end(), x));
  int f = (int)(lower_bound(v.begin(), v.end(), x) - v.begin());
  int t = (int)(upper_bound(v.begin(), v.end(), x) - v.begin());
  int f2 = *lower_bound(v.begin(), v.end(), x);
  int t2 = *upper_bound(v.begin(), v.end(), x);

  printf("%d의 갯수 : %d, 시작되는 점 : %d 끝나는 점 : %d\n", x, c, f, t);
  printf(
      "lower bound가 시작되는 점의 값 : %d, upper bound가 시작되는 점의 값 : "
      "%d\n",
      f2, t2);

  c = (int)(upper_bound(a, a + 5, x) - lower_bound(a, a + 5, x));
  f = (int)(lower_bound(a, a + 5, x) - a);
  t = (int)(upper_bound(a, a + 5, x) - a);
  f2 = *lower_bound(a, a + 5, x);
  t2 = *upper_bound(a, a + 5, x);
  printf("%d의 갯수 :%d, 시작되는 점 :%d 끝나는 점 :%d\n", x, c, f, t);
  printf(
      "lower bound가 시작되는 점의 값 : %d, upper bound가 시작되는 점의 값 : "
      "%d\n",
      f2, t2);

  return 0;
}