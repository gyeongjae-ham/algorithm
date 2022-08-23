#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, num, tmp, idx, cnt = 0;
  vector<int> v;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &num);
    v.push_back(num);
  }

  //* 선택 정렬로 풀었을 때
  for (int i = 0; i < n; i++) {
    idx = i;
    for (int j = i + 1; j < n; j++) {
      if (v[j] > v[idx]) idx = j;
    }
    tmp = v[i];
    v[i] = v[idx];
    v[idx] = tmp;
  }

  for (int i = 1; i < n; i++) {
    if (v[i - 1] != v[i]) cnt++;
    if (cnt == 2) {
      printf("%d\n", v[i]);
      break;
    }
  }

  //* 벡터로 풀었을 경우
  // sort(v.begin(), v.end(), greater<int>());

  // v.erase(unique(v.begin(), v.end()), v.end());

  // printf("%d\n", v[2]);

  return 0;
}