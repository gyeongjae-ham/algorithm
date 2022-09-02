#include <bits/stdc++.h>

using namespace std;
//* 배열 중 가장 큰 요소

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = *max_element(v.begin(), v.end());
    int a2 = *min_element(v.begin(), v.end());
    cout << a << "\n";
    cout << a2 << "\n";

    return 0;
}

//? 가장 작은 요소는 min_element 함수를 사용하면 된다