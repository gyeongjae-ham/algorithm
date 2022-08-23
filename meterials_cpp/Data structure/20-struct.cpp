#include <bits/stdc++.h>

using namespace std;

//* 커스텀한 구조체를 형성하기 위해서 class, struct를 써야 한다
//* struct만 알아도 충분하다
//* 먼저 보통의 구조체를 보자면 아래와 같다

struct Point {
  int y, x;  //? 이 구조체의 변수들

  Point(int y, int x) : y(y), x(x) {}
  //? y,x를 받아서 생성한다는 의미, 이 구조체를 기반으로
  //? 객체를 생성할 때, y,x를 받아 생성한다는 의미

  Point() {
    y = -1;
    x = -1;
  }
  //? 만약 y,x가 정해지지 않은 경우 기본값으로 -1, -1 지정

  bool operator<(const Point& a) const {
    if (x == a.x) return y < a.y;
    return x < a.x;
  }
  //? 해당 구조체를 기반으로 만들어진 객체들끼리 비교해야 하는 경우가 있다
  //? 예를 들어 PointA < PointB 의 경우처럼
  //? 그럴 때 비교하는 기준을 잡는 로직, 1순위는 x, 2순위는 y를 기반 비교
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}