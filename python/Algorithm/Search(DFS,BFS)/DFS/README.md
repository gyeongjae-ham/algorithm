## DFS(Depth-First Search)

- DFS는 <span style='background-color: #fff5b1'><span style='color: black'>깊이 우선 탐색</span></span>이라고도 부르며 그래프에서 깊은 부분을 우선적으로 탐색하는 알고리즘
- DFS는 <span style='background-color: #fff5b1'><span style='color: black'>스택 자료구조(혹은 재귀함수)</span></span>를 이용하며, 구체적인 동작 과정은 다음과 같다
  - 탐색 시작 노드를 스택에 삽입하고 방문 처리를 한다
  - 스택의 최상단 노드에 방문하지 않은 인접한 노드가 하나라도 있으면 그 노드를 스택에 넣고 방문 처리한다. 방문하지 않은 인접 노드가 없으면 스택에서 최상단 노드를 꺼낸다
  - 더 이상 2번의 과정을 수행할 수 없을 때까지 반복한다
