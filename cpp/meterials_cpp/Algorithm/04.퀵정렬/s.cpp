#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void quickSort(int *data, int start, int end) {
    if (start >= end)
        return; //* 원소가 1개일 경우

    int pivot = start; //* 기준이 되는 pivot 값 설정
    int i = start + 1; //* pivot 값보다 큰 값을 찾는 시작 위치
    int j = end;       //* pivot 값보다 작은 값을 찾는 시작 위치
    int tmp;           //* swap을 위한 선언

    while (i <= j) { //* 엇갈릴 때까지 반복
        while (data[i] <= data[pivot])
            i++; //* pivot 보다 작은 값의 인덱스 찾기
        //* pivot 보다 큰 값의 인덱스 찾기
        //* j가 왼쪽을 넘어가지 않도록 범위 설정
        //* j > start
        while (data[j] >= data[pivot] && j > start)
            j--;

        if (i > j) { //* 엇갈렸을 경우
            //* pivot 값과 j 위치의 값을 교체
            tmp = data[pivot];
            data[pivot] = data[j];
            data[j] = tmp;
        } else { //* 엇갈리지 않았을 경우
            //* 큰 값과 작은 값을 교체
            tmp = data[i];
            data[i] = data[j];
            data[j] = tmp;
        }
    }

    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}

int main() {
    int number = 10;
    int a[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    quickSort(a, 0, number - 1);

    for (int i = 0; i < number; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

//* 시간 복잡도 O(NlogN)
//* 최악의 경우 O(N^2) -> 1 2 3 4 5 6 7 8 9 10 정렬된 상태일 경우