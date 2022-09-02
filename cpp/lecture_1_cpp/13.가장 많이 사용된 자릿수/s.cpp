#include <bits/stdc++.h>

using namespace std;
// string s;
// int tmp, res;
int ch[10];
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //* 내 풀이
    // cin >> s;

    // int cnt = 0, max = 0;

    // for (int i = 0; i < s.length(); i++) {
    //   tmp = count(s.begin(), s.end(), s[i]);
    //   if (tmp > max) {
    //     res = s[i] - '0';
    //   } else if (tmp == max) {
    //     if (res < (s[i] - '0')) {
    //       res = s[i] = '0';
    //     }
    //   }
    // }

    // cout << res << "\n";

    //* 정답 풀이
    int digit, max = -2147000000, res;
    char a[104];
    cin >> s;
    stpcpy(a, s.c_str());

    for (int i = 0; a[i] != '\0'; i++) {
        digit = a[i] - 48;
        ch[digit]++;
    }

    for (int i = 0; i <= 9; i++) {
        if (ch[i] >= max) {
            max = ch[i];
            res = i;
        }
    }

    cout << res << "\n";

    return 0;
}