#include <bits/stdc++.h>

using namespace std;
int s, n, tmp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    for (int i = 0; i < s; i++) {
        cin >> n >> tmp;
        int res = 0;
        for (int j = 1; j <= n; j++) {
            res += j;
        }
        if (tmp == res)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}