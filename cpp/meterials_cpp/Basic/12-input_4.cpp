#include <bits/stdc++.h>

using namespace std;
char a[10][10];

// 문자를 받는 경우
/*
LLMM
MMLL
*/

int main() {

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            scanf(" %c", &a[i][j]); // 이런식으로 앞에 띄어쓰기를 붙인 것을 볼 수 있는데요. 문자를
                                    // 입력받게 되면 엔터도 “문자"로 취급되어 입력되기 때문에 해당
                                    // 부분을 고려해서 코드를 구축해야 합니다.
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}
