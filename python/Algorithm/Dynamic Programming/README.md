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

## 메모이제이션(Memoization)

- 메모이제이션은 다이나믹 프로그래밍을 구현하는 방법 중 하나
- <u>한 번 계산한 결과를 메모리 공간에 메모</u>하는 기법
  - 같은 문제를 다시 호출하면 메모했던 결과를 그대로 가져온다
  - 값을 기록해 놓는다는 점에서 **캐싱(Caching)**이라고도 한다

## 탑다운 vs 보텀업

- 탑다운(메모이제이션) 방식은 **하향식**이라고도 하며 보텀업 방식은 **상향식**이라고도 한다
- 다이나믹 프로그래밍의 전형적인 형태는 보텀업 방식이다.
  - 결과 저장용 리스트는 **DP 테이블**이라고 부른다
- 엄밀히 말하면 메모이제이션은 <u>이전에 계산된 결과를 일시적으로 기록해 놓는 넓은 개념을 의미</u>한다.
  - 따라서 메모이제이션은 다이나믹 프로그래밍에 국한된 개념이 아니다.
  - 한 번 계산된 결과를 담아 놓기만 하고 다이나믹 프로그래밍을 위해 활용하지 않을 수도 있다.

## 다이나믹 프로그래밍 VS 분할 정복

- 다이나믹 프로그래밍과 분할 정복은 모두 **최적 부분 구조**를 가질 때 사용할 수 있다.
  - 큰 문제를 작은 문제로 나눌 수 있으며 작은 문제의 답을 모아서 큰 문제를 해결할 수 있는 상황
- 다이나믹 프로그래밍과 분할 정복의 차이점은 <span style='background-color: #fff5b1'><span style='color: black'>부분 문제의 중복</span></span>이다
  - 다이나믹 프로그래밍 문제에서는 각 부분 문제들이 서로 영향을 미치며 부분 문제가 중복된다
  - 분할 정복 문제에서는 동일한 부분 문제가 반복적으로 계산되지 않는다

## 다이나믹 프로그래밍 문제에 접근하는 방법

- 주어진 문제가 **다이나믹 프로그래밍 유형임을 파악**하는 것이 중요하다
- 가장 먼저 그리디, 구현, 완전 탐색 등의 아이디어로 문제를 해결할 수 있는지 검토한다
  - 다른 알고리즘으로 풀이 방법이 떠오르지 않으면 다이나믹 프로그래밍을 고려하자
- 일단 재귀 함수로 비효율적인 완전 탐색 프로그램을 작성한 뒤에(탑다운) 작은 문제에서 구한 답이 큰 문제에서 그대로 사용될 수 있으면, 코드를 개선하는 방법을 사용할 수 있다.
- <u>일반적인 코딩 테스트 수준에서는 기본 유형의 다이나믹 프로그래밍 문제가 출제</u>되는 경우가 많다.
