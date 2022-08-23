#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int i, j, min, idx, tmp;
  int a[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

  for (i = 0; i < 10; i++) {
    min = 2147000000;  //* min을 큰 수로 초기화 해준다
    for (j = i; j < 10; j++) {
      if (min > a[j]) {
        min = a[j];  //* min 값에 더 작은 값을 담아주고
        idx = j;     //* 해당 값의 인덱스를 담아준다
      }
    }

    //* swap 과정
    tmp = a[i];
    a[i] = a[idx];
    a[idx] = tmp;
  }

  for (i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

//* 시간복잡도 O(N^2)