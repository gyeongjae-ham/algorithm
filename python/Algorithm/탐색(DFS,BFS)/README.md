## 그래프 탐색 알고리즘: DFS/BFS

- 탐색(Search)이란 많은 양의 데이터 중에서 원하는 데이터를 찾는 과정을 말한다
- 대표적인 그래프 탐색 알고리즘으로는 DFS와 BFS가 있다
- <span style='background-color: #fff5b1'><span style='color: black'>DFS/BFS는 코딩 테스트에서 매우 자주 등장하는 유형이므로</span></span> 반드시 숙지해야 한다

## 스택, 큐

- 스택 : list 사용하자 append, pop
- 큐: from collections import deque 사용 append, popleft

## 재귀 함수

- <span style='background-color: #fff5b1'><span style='color: black'>자기 자신을 다시 호출하는 함수</span></span>를 의미한다
- 어느 정도 출력하다가 최대 재귀 깊이 초과 메시지가 출력된다

### 재귀 함수 사용의 유의 사항

- 재귀 함수를 잘 활용하면 복잡한 알고리즘을 간결하게 작성할 수 있다.
  - 단, 오히려 다른 사람이 이해하기 어려운 형태의 코드가 될 수도 있으므로 신중하게 이용해야 한다
- 모든 재귀 함수는 반복문을 이용하여 동일한 기능을 구현할 수 있다.
- 재귀 함수가 반복문보다 유리한 상황도 있고 불리한 경우도 잇다.
- 컴퓨터가 함수를 연속적으로 호출하면 컴퓨터 메모리 내부의 스택 프레임에 쌓인다
  - 그래서 스택을 사용해야 할 때 구현상 <span style='background-color: #fff5b1'><span style='color: black'>스택 라이브러리 대신에 재귀 함수를 이용</span></span>하는 경우가 많다
