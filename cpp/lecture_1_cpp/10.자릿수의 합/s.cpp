#include <bits/stdc++.h>

using namespace std;
int n, num, sum, res;

int digit_sum(int x) {
    int tmp, sum = 0;
    while (x > 0) {
        tmp = x % 10; //* 나머지가 계속 일의 자리이므로
        sum += tmp;
        x /= 10; //* 변수를 10으로 나눈 몫으로 다시 할당해주면 된다
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    int max = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        sum = digit_sum(num);
        if (sum > max) {
            max = sum;
            res = num;
        } else if (sum == max) {
            if (num > res) {
                res = num;
            }
        }
    }

    cout << res << "\n";

    return 0;
}