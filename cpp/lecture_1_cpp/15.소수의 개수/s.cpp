#include <bits/stdc++.h>

using namespace std;
int n, cnt = 0;

bool check(int x) {
    if (x <= 1)
        return 0;
    if (x == 2)
        return 1;
    if (x % 2 == 0)
        return 0;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (check(i))
            cnt++;
    }
    cout << cnt << "\n";

    return 0;
}