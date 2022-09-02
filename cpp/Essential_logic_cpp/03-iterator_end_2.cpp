#include <bits/stdc++.h>

using namespace std;
vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 2; i <= 5; i++)
        v.push_back(i);
    v.push_back(7);

    cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
    cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
    cout << upper_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
    cout << lower_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
    cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << "\n";
    cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << "\n";
}

//* 해당 요소를 찾지 못했을 경우 위처럼 근방지점을 반환한다
//* 이분탐색에서의 결과도 이와 비슷하게 나온다