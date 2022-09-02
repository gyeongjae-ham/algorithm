#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int s, w, cur, pos, i, j,
        c[20] = {
            0,
        };

    scanf("%d %d", &s, &w);
    for (i = 0; i < w; i++) {
        scanf("%d", &cur);
        pos = -1;
        for (j = 0; j < s; j++) {
            if (c[j] == cur)
                pos = j;
        }

        if (pos == -1) {
            for (j = s - 1; j >= 1; j--) {
                c[j] = c[j - 1];
            }
        } else {
            for (j = pos; j >= 1; j--) {
                c[j] = c[j - 1];
            }
        }
        c[0] = cur;
    }

    for (i = 0; i < s; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}