#include <bits/stdc++.h>

using namespace std;

void f(vector<vector<int>> &v) {
    vector<int> vv;
    vv.push_back(10000);
    v.push_back(vv);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> v;
    f(v);

    for (int i : v[0])
        cout << i << " ";
    return 0;
}