#include <bits/stdc++.h>

//* set은 특정 순서에 따라 고유한 요소를 저장하는 자료구조
//* 중복 요소는 없고 오로지 unique한 값만 저장하는 자료구조
//* pair나 int형을 집어 넣어서 만들 수 있다
//* 중복 값은 제거되며 희소한 값만 출력한다. 나머지는 map과 동일

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<pair<string, int>> st;
    st.insert({"test", 1});
    st.insert({"test", 1});
    st.insert({"test", 1});
    st.insert({"test", 1});

    cout << st.size() << "\n";

    set<int> st2;
    st2.insert(1);
    st2.insert(2);
    st2.insert(2);

    for (auto it : st2) {
        cout << it << "\n";
    }

    return 0;
}