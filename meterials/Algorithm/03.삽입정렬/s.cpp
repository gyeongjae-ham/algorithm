#include <stdio.h>

#include <algorithm>
#include <vector>

using namespace std;
//* 삽입정렬은 각 숫자를 적절한 위치에 삽입하는 방법
//* 다른 정렬 방식들은 무조건 위치를 바꾸는 방식
//* 삽입 정렬은 필요할 때만 위치를 바꾸게 된다(더 효율적)

int main() {
  int i, j, tmp;
  int a[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

  for (i = 0; i < 9; i++) {
    j = i;
    while (a[j] > a[j + 1]) {  //* 왼쪽 값이 더 크면
      //* 왼쪽값이랑 swap 해주고 j-- 해준다
      tmp = a[j];
      a[j] = a[j + 1];
      a[j + 1] = tmp;
      j--;
    }
  }

  for (i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
