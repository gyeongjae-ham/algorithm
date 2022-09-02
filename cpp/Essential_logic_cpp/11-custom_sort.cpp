#include <bits/stdc++.h>

//* 커스텀정렬

using namespace std;
vector<int> v;

bool cmp(int a, int b) { return a > b; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i <= 6; i++)
        v.push_back(i);
    sort(v.begin(), v.end(), cmp);
    for (int i : v)
        cout << i << " ";

    return 0;
}