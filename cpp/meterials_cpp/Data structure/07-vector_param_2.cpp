#include <bits/stdc++.h>

using namespace std;

void f(vector<int> v[10]) { v[0][0] = 1000; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v[10];
    v[0].push_back(100);

    f(v);

    for (int i : v[0])
        cout << i << " ";

    return 0;
}