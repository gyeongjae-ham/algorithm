#include <bits/stdc++.h>

using namespace std;

/*
따닥따닥 붙어있는 것을 입력받는 방법
4 4
1000
0000
0111
0000
*/

int n, m;
string s;
int a[5][5];

// * scanf로 바로 받는 경우
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &a[i][j]);
        }
    }
    return 0;
}

// 앞에 1을 붙이면 한자리의 int만 받는다는 뜻