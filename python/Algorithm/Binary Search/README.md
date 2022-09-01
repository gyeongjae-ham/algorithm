## 이진 탐색 알고리즘

- 순차 탐색: 리스트 안에 있는 특정한 <span style='background-color: #fff5b1'><span style='color: black'>데이터를 찾기 위해 앞에서부터 데이터를 하나씩 확인</span></span>하는 방법
- 이진 탐색: 정렬되어 있는 리스트에서 <span style='background-color: #fff5b1'><span style='color: black'>탐색 범위를 절반씩 좁혀가며 데이터를 탐색</span></span>하는 방법
  - 이진 탐색은 시작점, 끝점, 중간점을 이용해서 탐색 범위를 설정한다

### 이진 탐색의 시간 복잡도

- 단계마다 탐색 범위를 2로 나누는 것과 동일하므로 <span style='background-color: #fff5b1'><span style='color: black'>연산 횟수는 log2N에 비례</span></span>한다
- 예를 들어 초기 데이터 개수가 32개일 때, 이상적으로 1단계를 거치면 16개가량의 데이터만 남는다
  - 2단계를 거치면 8개
  - 3단계를 거치면 4개
- 다시 말해 이진 탐색은 탐색 범위를 절반씩 줄이며, 시간 복잡도는 `O(logN)`을 보장한다

### 파이썬 이진 탐색 라이브러리

- `bisect_left(a, x)`: 정렬된 순서를 유지하면서 배열 a에 X를 삽입할 가장 왼쪽 인덱스를 반환
- `bisect_right(a, x)`: 정렬된 순서를 유지하면서 배열 a에 X를 삽입할 가장 오른쪽 인덱스를 반환

## 파라메트릭 서치(Parametric Search)

- <span style='background-color: #fff5b1'><span style='color: black'>파라메트릭 서치</span></span>란 <u>최적화 문제를 결정 문제('예' 혹은 '아니오')로 바꾸어 해결하는 기법</u>이다
  - 예시: 특정한 조건을 만족하는 가장 알맞은 값을 빠르게 찾는 최적화 문제
- 일반적으로 코딩 테스트에서 파라메트릭 서치 문제는 <span style='background-color: #fff5b1'><span style='color: black'>이진 탐색을 이용하여 해결</span></span>할 수 있다
