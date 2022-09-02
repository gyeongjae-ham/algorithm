#include <bits/stdc++.h>

using namespace std;
int n, tmp, j;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    vector<int> ch(n + 1);
    for (int i = 2; i <= n; i++) {
        tmp = i;
        j = 2;
        while (1) {
            if (tmp % i == 0) {
                tmp = tmp / j;
                ch[j]++;
            } else
                j++;
            if (tmp == 1)
                break;
        }
    }

    cout << n << "! = ";
    for (int i = 2; i <= n; i++) {
        if (ch[i] != 0)
            cout << ch[i] << " ";
    }
    cout << "\n";

    // scanf("%d", &n);
    // vector<int> ch(n + 1);
    // for (int i = 2; i <= n; i++) {
    //   tmp = i;
    //   j = 2;
    //   while (1) {
    //     if (tmp % j == 0) {
    //       tmp = tmp / j;
    //       ch[j]++;
    //     } else
    //       j++;
    //     if (tmp == 1) break;
    //   }
    // }

    // printf("%d! = ", n);
    // for (int i = 2; i <= n; i++) {
    //   if (ch[i] != 0) printf("%d ", ch[i]);
    // }
    // printf("\n");

    return 0;
}