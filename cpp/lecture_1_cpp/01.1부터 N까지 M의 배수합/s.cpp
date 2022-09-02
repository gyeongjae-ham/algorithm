#include <bits/stdc++.h>

using namespace std;
int n, m, answer;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            answer += i;
        }
    }

    cout << answer << "\n";

    return 0;
}