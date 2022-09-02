#include <bits/stdc++.h>

using namespace std;
int a, b, sum;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        sum += i;
        if (i == b)
            cout << i << " = " << sum << "\n";
        else
            cout << i << " + ";
    }

    return 0;
}