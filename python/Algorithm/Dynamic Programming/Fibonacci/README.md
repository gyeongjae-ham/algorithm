## 피보나치 수열의 시간 복잡도

- 피보나치 수열의 <span style='background-color: #fff5b1'><span style='color: black'>시간 복잡도</span></span>는 다음과 같다
  - <span style='background-color: #fff5b1'><span style='color: black'>세타 표기법</span></span>: θ(1.618﹒﹒﹒ᴺ)
  - <span style='background-color: #fff5b1'><span style='color: black'>빅오 표기법</span></span>: O(2ᴺ)
- 빅오 표기법을 기준으로 𝑓(30)을 계산하기 위해 약 10억가량의 연산을 수행해야 한다

## 피보나치 수열의 효율적인 해법: 다이나믹 프로그래밍

- 다이나믹 프로그래밍의 사용 <span style='background-color: #fff5b1'><span style='color: black'>조건</span></span>을 만족하는지 확인
  - 1. **최적 부분 구조**: 큰 문제를 작은 문제로 나눌 수 있다.
  - 2. **중복되는 부분 문제**: 동일한 작은 문제를 반복적으로 해결한다.
- 피보나치 수열은 다이나믹 프로그래밍의 사용 조건을 만족한다
