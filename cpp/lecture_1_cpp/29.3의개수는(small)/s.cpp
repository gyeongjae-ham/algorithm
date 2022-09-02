#include <stdio.h>

#include <algorithm>
#include <vector>

using namespace std;
int n, tmp, digit, cnt = 0;

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        tmp = i;
        while (tmp > 0) {
            digit = tmp % 10;
            if (digit == 3) {
                cnt++;
            }
            tmp = tmp / 10;
        }
    }

    printf("%d\n", cnt);

    return 0;
}