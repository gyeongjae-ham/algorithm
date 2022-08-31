## 계수 정렬

- 특정한 조건이 부합할 때만 사용할 수 있지만 <span style='background-color: #fff5b1'><span style='color: black'>매우 빠르게 동작하는</span></span> 정렬 알고리즘
  - 계수 정렬은 <span style='background-color: #fff5b1'><span style='color: black'>데이터의 크기 범위가 제한되어 정수 형태로 표현할 수 있을 때</span></span> 사용 가능하다
- 데이터의 개수가 N, 데이터(양수) 중 최댓값이 K일 때 최악의 경우에도 수행 시간 `O(N+K)`를 보장한다

### 계수 정렬의 복잡도 분석

- 계수 정렬의 시간 복잡도와 공간 복잡도는 모두 `O(N+K)`이다
- 계수 정렬은 때에 따라서 심각한 비효율성을 초래할 수 있다.
  - 데이터가 0과 999,999로 단 2개만 존재하는 경우
- 계수 정렬은 <span style='background-color: #fff5b1'><span style='color: black'>동일한 값을 가지는 데이터가 여러 개 등장할 때</span></span> 효과적으로 사용할 수 있다.
  - 성적의 경우 100점을 맞은 학생이 여러 명일 수 있기 때문에 계수 정렬이 효과적이다
