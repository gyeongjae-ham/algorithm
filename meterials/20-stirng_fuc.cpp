#include <bits/stdc++.h>

using namespace std;
string dopa = "amumu is best";

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  cout << dopa << "\n";
  cout << dopa.find(" ") << "\n";
  if (dopa.find("amumu") != string::npos) {
    cout << "dopa속에 아무무있다!" << "\n";
  }
  cout << dopa.substr(0, 3) << "\n";
  reverse(dopa.begin(), dopa.end());
  cout << dopa << "\n";
  return 0;
}
/*
amumu is best
dopa 속에 아무무있다!
amu
tseb si umuma
*/

// ? revers: 원래의 문자열을 바꿔준다. begin과 end를 통해 전체를 바꿔도 되고, dopa.begin(), dopa.begin()+3 이런식으로 부분만 바꿀 수도 있다
// ? substr: 시작점으로부터 몇 개의 문자열을 뽑아낸다. 만약 시작점만 넣게 되면 마지막까지 문자열을 뽑아낸다
// ? find: 어떠한 문자열이 들어있나 찾는다. 만약 찾지 못한다면 문자열의 끝 위치인 string::npos를 반환한다