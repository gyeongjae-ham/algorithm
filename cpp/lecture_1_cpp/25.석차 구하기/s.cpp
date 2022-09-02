#include <bits/stdc++.h>

using namespace std;
int n, num, a[200], b[200];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        a[i] = num;
        b[i] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] > a[i])
                b[i]++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";

    return 0;
}