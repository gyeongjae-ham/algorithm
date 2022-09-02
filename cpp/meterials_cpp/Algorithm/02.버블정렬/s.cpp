#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, j, tmp;
    int a[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) { //* 버블정렬은 가장 큰 수를 뒤로 보내면서
                                      //* 정렬하므로 배열크기에서 i 값을 빼준다
            if (a[j] > a[j + 1]) {
                //* swap 하기
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

//* 정렬 알고리즘 중 가장 효율이 떨어지는 알고리즘
//* 시간 복잡도 O(N^2)
//* 시간복잡도는 같지만 계속 자리를 바꾸는 로직을 수행해야 해서 더 오래 걸린다