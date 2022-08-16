#include <bits/stdc++.h>

using namespace std;
string s;
stack<char> stk;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '(') {
      stk.push('(');
    } else {
      if (!stk.empty() && stk.top() == '(')
        stk.pop();
      else
        stk.push(')');
    }
  }

  if (stk.empty())
    cout << "YES"
         << "\n";
  else
    cout << "NO"
         << "\n";

  return 0;
}