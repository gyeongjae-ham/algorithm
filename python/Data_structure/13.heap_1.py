"""
힙(Heap)이란?
- 힙: 데이터에서 최대값과 최소값을 빠르게 찾기 위해 고안된 완전 이진 트리(Complete Binary Tree)
- 완전 이진 트리: 노드를 삽입할 때 최하단 왼쪽 노드부터 차례대로 삽입하는 트리

힙을 사용하는 이유
- 배열에 데이터를 넣고, 최대값과 최소값을 찾으려면 O(N)이 걸림
- 이에 반해, 힙에 데이터를 넣고, 최대값과 최소값을 찾으면, O(logN)이 걸림
- 우선 순위 큐와 같이 최대값 또는 최소값을 빠르게 찾아야 하는 자료구조 및 알고리즘 구현 등에 활용됨
"""
"""
힙(Heap)의 구조
- 힙은 최대값을 구하기 위한 구조 최대 힙과 최소값을 구하기 위한 구조 최소 힙으로 분류할 수 있음
- 힙은 다음과 같이 두 가지 조건을 가지고 있는 자료구조
    - 각 노드의 값은 해당 노드의 자식 노드가 가진 값보다 크거나 같다.(최대 힙의 경우)
    - 최소힙의 경우 각 노드의 값은 자식 노드가 가진 값보다 크거나 작음
    - 완전 이진 트리 형태를 가짐
"""
"""
힙과 이진 탐색 트리의 공통점과 차이점
1. 공통점
    - 힙과 이진 탐색 트리는 모두 이진 트리이다
2. 차이점
    - 힙은 각 노드의 값이 자식 노드보다 크거나 같다(최대 힙의 경우)
    - 이진 탐색 트리는 왼쪽 자식 노드의 값이 작고, 그 다음 부모 노드, 그 다음 오른쪽 자식 노드 값이 가장 크다
    - 힙은 이진 탐색 트리의 조건인 자식 노드에서 작은 값은 왼쪽, 큰 값은 오른쪽이라는 조건이 없다
        - 힙은 왼쪽 및 오른쪽 자식 노드의 값은 오른쪽이 클 수도, 왼쪽이 클 수도 있다
- 이진 탐색 트리는 탐색을 위한 구조, 힙은 최대/최소값 검색을 위한 구조 중 하나로 이해하면 된다
"""


class Heap:
    def __init__(self, data):
        self.heap_array = list()
        self.heap_array.append(None)
        self.heap_array.append(data)

    def move_up(self, inserted_idx):
        if inserted_idx <= 1:
            return False

        parent_idx = inserted_idx // 2
        if self.heap_array[inserted_idx] > self.heap_array[parent_idx]:
            return True
        else:
            return False

    def insert(self, data):
        if len(self.heap_array) == 0:
            self.heap_array.append(None)
            self.heap_array.append(data)
            return True

        self.heap_array.append(data)
        inserted_idx = len(self.heap_array) - 1

        while self.move_up(inserted_idx):
            parent_idx = inserted_idx // 2
            self.heap_array[inserted_idx], self.heap_array[parent_idx] = (
                self.heap_array[parent_idx],
                self.heap_array[inserted_idx],
            )
            inserted_idx = parent_idx

        return True


heap = Heap(15)
heap.insert(10)
heap.insert(8)
heap.insert(5)
heap.insert(4)
heap.insert(20)

print(heap.heap_array)
