#include <bits/stdc++.h>

//* 스택은 가장 마지막으로 들어간 데이터가 가장 첫 번째로 나오는 자료구조
//* 재귀적인 함수, 알고리즘에 사용되며 웹 브라우저 방문 기록에 쓰임
//* 삽입 및 삭제에 O(1), 탐색에 O(N)이 걸린다
//* LIFO - 문자열 폭발, 아름다운 괄호만들기, 짝 찾기 등 문제에 사용
//* 교차하지 않고 라는 문장이 나오면 스택 사용 여부 의심해보기

using namespace std;
stack<string> stk;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stk.push("ham");
    stk.push("gj");
    stk.push("화");
    stk.push("이");
    stk.push("팅");

    while (stk.size()) {
        cout << stk.top() << "\n";
        stk.pop();
    }

    return 0;
}