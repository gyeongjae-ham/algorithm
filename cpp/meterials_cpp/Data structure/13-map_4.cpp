#include <bits/stdc++.h>

//? 맵에 요소가 있는지 없는지 확인해서 할당하는 로직

using namespace std;
map<int, int> mp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    if (mp[1] == 0) {
        mp[1] = 2;
    }

    for (auto i : mp)
        cout << i.first << " " << i.second;

    return 0;
}

//* map과 unordered_map의 차이
//* map: 정렬됨, 레드블랙트리기반, 탐색, 삽입, 삭제 O(logN) 걸림
//* unordered_map: 정렬x, 해시테이블기반, 탐색, 삽입, 삭제 O(1) -> 최악 O(N)
//* 되도록이면 map을 사용하자