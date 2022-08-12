# C++ 기초

## C++ 의 기본

1. 형(타입, type)
   1. `void`: 리턴하는 값이 없다
   2. `char`: 문자
   3. `string`: 문자열 - 아스키 코드
   4. `bool`: 참과 거짓
   5. `int`: 4바이트짜리 정수
   6. `long long`: 8바이트짜리 정수
   7. `double`: 실수형
   8. `unsigned long long`: 8바이트짜리 양의 정수
2. 입력
   1. 붙어있는 것을 입력받는 방법
      1. string으로 변환
      2. scanf로 받기
   2. getline
      1. 입력이 계속 이어질 때
3. 출력
   1. `cout`
   2. 실수형 출력
   3. `printf`
4. 형변환
   1. double을 int형으로 만들기
   2. 문자를 숫자로, 숫자를 문자로
5. 문자열
   1. `split`

## 자료구조

1. pair와 tuple
   1. `sort()` 함수
2. vector
   1. `vector`를 함수 매개변수로 만들어 변화시키기
3. Array
   1. 배열의 초기화: `fill`과 `memset`
   2. 배열의 복사: `memcpy`
4. 배열이란?
   1. 랜덤 접근과 순차적 접근
5. 2차원 배열
6. map
   1. map과 unordered_map의 차이
7. `set`
8. `multiset`
9. `stack`
10. `queue`
11. `deque`
12. `struct`(구조체)
13. `priority queue`
14. 자료구조 복잡도 정리

## 포인터

1. 포인터
2. 이터레이터와 포인터
3. call by reference와 value
4. 배열과 포인터

## 수학

1. 순열과 조합
   1. `순열`
   2. `조합`
   3. 조합과 순열의 특징
2. 정수론
   1. `최대공약수`와 `최소공배수`
   2. `모듈러 연산`
   3. `에라토스테네스의 체`
   4. `등차수열의 합`

## 질문으로 배우는 코딩테스트에 자주 나오는 필수로직

1. `lower_bound`와 `upper_bound`
   1. 참고: 이터레이터와 end()
2. 시계방향과 반시계방향 회전
3. 배열의 합, `accumulate`
4. 배열 중 가장 큰 요소 `max_element`
5. 배열 부분 회전
6. 함수인자로 전달해서 변수 수정하기
7. n진법 변환
8. 내림차순 정렬
9. 커스텀 정렬
10. 2차원배열을 수정하는 함수
11. 2차원배열을 회전하는 함수

## 코드를 구축하는 법

1. 전역변수와 변수명을 간결하게
   1. 동적할당과 정적할당
      1. 참고: malloc
   2. 배열의 경우 조금 더 넓게
   3. 빠른 속도로 코딩하자!

## 자주 실수하는 것들

1. bits/stdc++.h에서 기본적으로 사용할 수 없는 변수명
2. 입출력 싱크
3. 스택오버플로(stack overflow)
4. 변수 초기화 문제
5. 실수형 연산
6. 문자열 크기 선언
7. 참조 에러(reference Error)
8. UB(Undefined Behavior)
9. endl보다는 "\n"을 써라

## 알고리즘을 공부하는 자세

1. 올바른 과정
2. 다양하게 풀 수 없을까?
3. 손코딩하라

`g++ -std=c++14 -Wall a.cpp -o test.out`<br>
`./test.out`

# <bits/stdc++.h> 사용못할 경우

## iostream의 함수들

- `swap`
- `getline`
- `clear`
- `fill`
- `tie`
- `precision`
- `sync_with_stdio`
- `cin`
- `cout`
- `stdio.h의 함수들`
- `printf`
- `scanf`
- `puts`

## string.h의 함수들

- `memcpy`
- `memset`
- `size_t`

## algorithm의 함수들

- `find`
- `swap`
- `fill`
- `remove`
- `unique`
- `rotate`
- `shuffle`
- `sort`
- `stable_sort`
- `lower_bound`
- `upper_bound`
- `min`
- `max`
- `min_element`
- `max_element`
- `next_permutation`
- `prev_permutation`

![](https://velog.velcdn.com/images/hiyee-gj/post/1c328733-7ecd-4bd7-8264-04c88c3eccdf/image.png)
