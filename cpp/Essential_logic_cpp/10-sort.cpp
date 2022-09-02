#include <bits/stdc++.h>

//* 내림차순 정렬

using namespace std;
vector<int> v;
vector<pair<int, int>> v2;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i <= 6; i++)
        v.push_back(i);
    sort(v.begin(), v.end(), greater<int>());
    for (int i : v)
        cout << i << "\n";

    for (int i = 1; i <= 6; i++)
        v2.push_back({i, i});
    sort(v2.begin(), v2.end(), greater<pair<int, int>>());
    for (auto a : v2)
        cout << a.first << " ";

    return 0;
}