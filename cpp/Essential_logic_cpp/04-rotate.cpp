#include <bits/stdc++.h>

using namespace std;
vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i < 10; i++)
        v.push_back(i); // 1 2 3 ...

    // 앞으로 rotate할 때
    // rotate(v.begin(), v.begin() + 1, v.end()); // 2 3 4 .. 9 1

    // 뒤로 rotate 할 때
    rotate(v.begin(), v.begin() + v.size() - 1, v.end());

    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << ' ' << *it;
    }
    cout << "\n";
}