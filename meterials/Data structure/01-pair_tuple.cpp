#include <bits/stdc++.h>

// * 두 가지의 값을 담아야 할 때가 있다. 그럴 때 쓰는 pair
// * 세 가지 이상의 값을 넣을 때 스는 tuple
// * 여기서 tie는 pair 또는 tuple에 들어있는 두 가지 이상의 값을 끄집어낼 때 사용된다
using namespace std;
pair<int, int> pi;
tuple<int, int, int> tl;
int a, b, c;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  pi = {1, 2};
  tl = make_tuple(1, 2, 3);

  tie(a, b) = pi;
  cout << a << " : " << b << "\n";

  tie(a, b, c) = tl;
  cout << a << " : " << b << " : " << c << "\n";

  a = pi.first; // 이런식으로 꺼내야 한다 귀찮기 때문에 tie를 쓰자
  b = pi.second;

  cout << a << " : " << b << "\n";

  a = get<0>(tl); // 이런식으로 꺼내야 한다 귀찮기 때문에 tie를 쓰자
  b = get<1>(tl);
  c = get<2>(tl);

  cout << a << " : " << b << " : " << c << "\n";
  return 0;
}

// * pair의 경우 {a,b} or make_pair(a,b)로 만들 수 있다. 그저 2개의 원소를 담은 바구니를 생각하면 된다
// * 이 때 보통은 a = pi.first; b = pi.second 이런식으로 꺼내야 하는데 tie(a,b) = pi 이 방식이 더 편하다, 물론 이 때 a,b는 변수로 선언되어야 한다
