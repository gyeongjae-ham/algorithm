## 다이나믹 프로그래밍

- 다이나믹 프로그래밍은 <span style='background-color: #fff5b1'><span style='color: black'>메모리를 적절히 사용하여 수행 시간 효율성을 비약적으로 향상시키는 방법</span></span>이다
- <u>이미 계산된 결과(작은 문제)는 별도의 메모리 영역에 저장</u>하여 다시 계산하지 않도록 한다
- 다이나믹 프로그래밍의 구현은 일반적으로 두 가지 방식(탑다운과 보텀업)으로 구성된다
- 다이나믹 프로그래밍은 <span style='background-color: #fff5b1'><span style='color: black'>동적 계획법</span></span>이라고도 불린다

### 다이나믹 프로그래밍의 조건

- 다이나믹 프로그래밍은 문제가 다음의 조건을 만족할 때 사용할 수 있다
  - **최적 부분 구조 (Optimal Substructure)**
    - 큰 문제를 작은 문제로 나눌 수 있으며 작은 문제의 답을 모아서 큰 문제를 해결할 수 있다
  - **중복되는 부분 문제 (Overlapping Subproblem)**
    - 동일한 작은 문제를 반복적으로 해결해야 한다
