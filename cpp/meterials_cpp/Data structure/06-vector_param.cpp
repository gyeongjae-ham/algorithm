#include <bits/stdc++.h>

using namespace std;
void f(vector<int> &v) { v[0] = 100; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;

    for (int i = 1; i <= 3; i++)
        v.push_back(i);
    f(v);

    for (int i : v)
        cout << i << " ";
    return 0;
}

// * 함수 매개변수로 넘겨서 변화시키고 싶을 땐 다음처럼 call by reference로
// * 넘겨서 수정하면 된다