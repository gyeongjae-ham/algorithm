#include <bits/stdc++.h>

// * sort()는 배열 등 컨테이너들의 요소를 정렬하는 함수 - 컨테이너: 같은 타입의 여러 객체를 저장하는 집합
// * 보통 array나 vector를 정렬할 때 사용한다
// * sort에 들어가는 매개변수로는 3가지가 있으며 2개는 반드시 넣어야 하며, 한개는 선택이다
// ? sort(first, last, *커스텀비교함수)
// * first는 정렬하고 싶은 배열의 첫 번째 이터레이터, last는 정렬하고 싶은 배열의 마지막 이터레이터를 넣으면 된다
// * first는 포함하고 last는 포함하지 않는다! - 따라서 크기가 5인 배열 전체를 sort한다면
// ! sort(a[0], a[0] + 5) 라고 해야만 전체가 sort된다
// * 3번째 인자로는 커스텀비교함수(선택)이 있다. sort에 커스텀비교함수를 넣지 않으면 기본적으로 오름차순이다
// * 이를 3번째 인자에 greater<int>()를 넣어 내림차순 등으로 변경할 수 있다. 참고로 less<int>()를 통해 오름차순으로 정렬 가능

using namespace std;
vector<int> a;
int b[5];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 5; i >= 1; i--)
    b[i - 1] = i;
  for (int i = 5; i >= 1; i--)
    a.push_back(i);

  // * 오름차순
  sort(b, b + 5);
  sort(a.begin(), a.end());
  for (int i : b)
    cout << i << " ";
  cout << "\n";
  for (int i : a)
    cout << i << " ";
  cout << "\n";

  sort(b, b + 5, less<int>());
  sort(a.begin(), a.end(), less<int>());
  for (int i : b)
    cout << i << " ";
  cout << "\n";
  for (int i : a)
    cout << i << " ";
  cout << "\n";

  // * 내림차순
  sort(b, b + 5, greater<int>());
  sort(a.begin(), a.end(), greater<int>());
  for (int i : b)
    cout << i << " ";
  cout << "\n";
  for (int i : a)
    cout << i << " ";
  cout << "\n";

  return 0;
}