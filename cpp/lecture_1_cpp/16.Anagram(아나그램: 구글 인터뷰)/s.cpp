#include <bits/stdc++.h>

using namespace std;
int a[60] =
    {
        0,
},
    b[60] = {
        0,
};
string s1, s2;
char str[104];

int main() {
    //* 정답 풀이
    // char str[104];
    // scanf("%s", &str);

    // for (int i = 0; str[i] != '\0'; i++) {
    //   if (str[i] >= 65 && str[i] <= 90) {
    //     a[str[i] - 64]++;
    //   } else
    //     a[str[i] - 70]++;
    // }

    // scanf("%s", &str);

    // for (int i = 0; str[i] != '\0'; i++) {
    //   if (str[i] >= 65 && str[i] <= 90) {
    //     b[str[i] - 64]++;
    //   } else
    //     b[str[i] - 70]++;
    // }

    // for (int i = 1; i <= 52; i++) {
    //   if (a[i] != b[i]) {
    //     printf("NO\n");
    //     exit(0);
    //   }
    // }

    // printf("YES\n");

    // return 0;

    //* 내 풀이
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s1 >> s2;

    stpcpy(str, s1.c_str());

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            a[str[i] - 64]++;
        } else
            a[str[i] - 70]++;
    }

    stpcpy(str, s2.c_str());

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            b[str[i] - 64]++;
        } else
            b[str[i] - 70]++;
    }

    for (int i = 1; i <= 52; i++) {
        if (a[i] != b[i]) {
            cout << "NO"
                 << "\n";
            return 0;
        }
    }
    cout << "YES"
         << "\n";

    return 0;
}