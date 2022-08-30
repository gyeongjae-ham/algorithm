## BFS(Breadth-First Search)

- BFS는 <span style='background-color: #fff5b1'><span style='color: black'>너비 우선 탐색</span></span>이라고도 부르며, 그래프에서 <span style='background-color: #fff5b1'><span style='color: black'>가까운 노드부터 우선적으로 탐색하는 알고리즘</span></span>입니다.
- BFS는 <span style='background-color: #fff5b1'><span style='color: black'>큐 자료구조</span></span>를 이용하며, 구체적인 동작 과정은 다음과 같다
  - 탐색 시작 노드를 큐에 삽입하고 방문 처리한다.
  - 큐에서 노드를 꺼낸 뒤에 해당 노드의 인접 노드 중에서 방문하지 않은 노드를 모두 큐에 삽입하고 방문 처리한다
  - 더 이상 2번의 과정을 수행할 수 없을 때까지 반복한다
