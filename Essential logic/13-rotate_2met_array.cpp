#include <bits/stdc++.h>

//* 2차원 배열을 90도 회전시키는 함수

using namespace std;

//? 왼쪽으로 90도
void rotate_L_90(vector<vector<int>> &key) {
  int m = key.size();
  vector<vector<int>> temp(m, vector<int>(m, 0));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      temp[i][j] = key[j][m - i - 1];
    }
  }

  key = temp;
  return;
}

//? 오른쪽으로 90도
void rotate_R_90(vector<vector<int>> &key) {
  int m = key.size();
  vector<vector<int>> temp(m, vector<int>(m, 0));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      temp[i][j] = key[m - j - 1][i];
    }
  }

  key = temp;
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}