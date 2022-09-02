#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int number = 8;
int sorted[8]; //* 정렬 때 사용할 배열은 반드시 전역 변수로 선언

void merge(int a[], int m, int middle, int n) {
    //* m: 병합하려는 배열의 시작점
    //* middle: 병합하려는 배열의 중간점
    //* n: 병합하려는 배열의 끝점

    int i = m;
    int j = middle + 1;
    int k = m;

    //? 작은 순서대로 배열에 삽입
    while (i <= middle && j <= n) {
        if (a[i] <= a[j]) { //* i위치 값이 더 작은 경우
            sorted[k] = a[i];
            i++;
        } else { //* j위치 값이 더 작은 경우
            sorted[k] = a[j];
            j++;
        }
        k++;
    }
    //? 남은 데이터 삽입
    if (i > middle) { //* i가 먼저 끝난 경우
        for (int t = j; t <= n; t++) {
            sorted[k] = a[t];
            k++;
        }
    } else {
        for (int t = i; t <= middle; t++) {
            sorted[k] = a[t];
            k++;
        }
    }
    //* 정렬된 배열을 실제 배열로 옮겨주기
    for (int t = m; t <= n; t++) {
        a[t] = sorted[t];
    }
}

void mergeSort(int a[], int m, int n) {
    //* 배열의 크기가 1 이상인 경우만 둘로 나눈다
    if (m < n) {
        int middle = (m + n) / 2;
        mergeSort(a, m, middle);
        mergeSort(a, middle + 1, n);
        merge(a, m, middle, n);
    }
}

int main() {
    int a[10] = {7, 6, 5, 8, 3, 5, 9, 1};

    mergeSort(a, 0, number - 1);

    for (int i = 0; i < number; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

//* 시간 복잡도 O(NlogN)
//* 빠른 시간 복잡도를 보장하지만
//* 정렬할 추가적인 배열이 필요하다는 점에서 비효율적이다