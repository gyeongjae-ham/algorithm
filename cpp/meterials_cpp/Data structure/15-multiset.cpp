#include <bits/stdc++.h>

//* multiset은 중복되는 원소도 집어넣을 수 있는 자료구조
//* key, value 형태로 집어넣을 필요도 없고, 넣으면 자동으로 정렬
//* erase, find, insert가 가능

using namespace std;
multiset<int> s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    s.insert(12);
    s.insert(10);
    s.insert(2);
    s.insert(10);
    s.insert(90);
    s.insert(85);
    s.insert(45);

    cout << "Multiset elements after sort\n";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << "\n";

    auto it1 = s.find(10);
    auto it2 = s.find(90);

    s.erase(it1, it2);

    cout << "Multiset Elements after erase:\n";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << (*it) << " ";
    }

    s.erase(s.begin());
    cout << "\n";

    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it) << " ";

    return 0;
}