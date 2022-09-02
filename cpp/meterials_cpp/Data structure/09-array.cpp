#include <bits/stdc++.h>

using namespace std;

// * 정적배열
// * 연속된 메모리 공간이며 스택에 할당된다
// * 컴파일 단계에서 크기가 결정된다
// * c 스타일 => int a[10]
// * std 스타일 array<int, 10> a;
// * c 스타일로 사용하자

int v[10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i <= 10; i++)
        v[i - 1] = i;
    for (int a : v)
        cout << a << " ";
    cout << "\n";

    auto a = find(v, v + 10, 100);
    if (a == v + 10)
        cout << "not found"
             << "\n";

    fill(v, v + 10, 10);
    for (int a : v)
        cout << a << " ";
    cout << "\n";

    return 0;
}

//* erase, push_back 등의 메서드가 없다
//* 배열의 크기를 먼저 선언해 준 후 요소를 할당해 주고 진행해야 한다
//* 이 때 문제에서 필요한 "최대크기"로 선언해야 한다