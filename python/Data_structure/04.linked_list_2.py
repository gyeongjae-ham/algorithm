# 링크드리스트의 장단점(전통적인 C언어에서의 배열과 링크드 리스트)
# 장점
# 미리 데이터 공간을 할당하지 않아도 된다(배열은 미리 해야함)
# 단점
# 연결을 위한 별도 데이터 공간이 필요하므로, 저장공간 효율이 높지 않음
# 연결 정보를 찾는 시간이 필요하므로 접근 속도가 느림
# 중간 데이터 삭제 시, 앞 뒤 데이터의 연결을 재구성해야 하는 부가적인 작업 필요

# ? 파이썬 객체지향 프로그래밍으로 링크드 리스트 구현하기
class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next


class NodeMgmt:
    def __init__(self, data):
        self.head = Node(data)

    def add(self, data):
        if self.head == "":
            self.head = Node(data)
        else:
            node = self.head
            while node.next:
                node = node.next
            node.next = Node(data)

    def desc(self):
        node = self.head
        while node:
            print(node.data)
            node = node.next


linkedlist1 = NodeMgmt(0)

for data in range(1, 10):
    linkedlist1.add(data)

linkedlist1.desc()
