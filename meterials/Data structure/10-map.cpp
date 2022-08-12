#include <bits/stdc++.h>

//* string : int 형태로 값을 할당해야 할 경우 사용
//* key, value 형태로 이뤄져 있고, 레드-블랙 트리 구조를 내장하고 있음
//* 데이터를 삽입할 때 정렬된 위치에 삽입되게 된다
//* map은 unordered_map과 map 두 가지가 있다
//* 하나는 정렬을 보장하지 않는, 하나는 정렬을 보장하는 자료구조
//* map<string, int> 이런 식으로 된다
//* 배열과 비슷하게 clear로 맵에 있는 모든 요소를 삭제할 수 있다
//* size로 크기, erase로 key 값 삭제 가능

using namespace std;
int v[10];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  unordered_map<string, int> umap;
  // 넣는 방법 1
  umap.insert({"test1", 1});

  // 넣는 방법 2
  umap.emplace("test5", 5);

  // 변경
  umap["test1"] = 4;

  for (auto element : umap) {
    cout << element.first << " : " << element.second << "\n";
  }

  // map의 find 메서드는 찾지 못하면 end() 이터레이터를 반환한다
  auto search = umap.find("test4");
  if (search != umap.end()) {
    cout << "found : " << search->first << " " << (*search).second << "\n";
  } else {
    cout << "not found.."
         << "\n";
  }

  // 이런식으로 int형 증가 가능
  umap["test1"]++;
  cout << umap["test1"] << "\n";

  // 지우기
  cout << umap.size() << "\n";
  umap.erase("test1");
  cout << umap.size() << "\n";

  return 0;
}