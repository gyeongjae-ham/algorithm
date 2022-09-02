#include <bits/stdc++.h>

using namespace std;
int a;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a;
    scanf("%d", &a);
    return 0;
}

// 보통은 cin과 scanf로 입력을 받는다
// %d는 int형, %lf 실수형, %c는 char형을 받는다
// 문제에서 형식을 기반으로 입력이 주어지지 않는 경우 cin을 쓰는 것이 좋다. cin은 개행문자(띄어쓰기,
// 엔터)를 구분해서 입력을 받는다 3.22 처럼 오는 경우처럼 입력 형식이 주어진 상태로 올 때,
// scanf("%d.%d", &m1, &m2) 형식으로 받는다