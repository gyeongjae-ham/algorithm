# * 링크드 리스트(Linked List) 구조
# * 연결 리스트라고도 함
# * 배열은 순차적으로 연결된 공간에 데이터를 나열하는 데이터 구조
# * 링크드 리스트는 떨어진 곳에 존재하는 데이터를 화살표로 연결해서 관리하는 데이터 구조
# ? 본래 C언어에서는 주요한 데이터 구조이지만, 파이썬은 리스트 타입이 링크드 리스트의 기능을 모두 지원

# 링크드 리스트 기본 구조와 용어
# 노드(Node): 데이터 저장 단위(데이터 값, 포인터) 구성
# 포인터(pointer): 각 노드 안에서, 다음이나 이전의 노드와의 연결 정보를 가지고 있는 공간

# * 링크드 리스트 구현하기(class 이용)

# * 1 노드 생성
class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next


# * 노드와 노드 연결
node1 = Node(1)
node2 = Node(2)
node1.next = node2  # node1의 다음 노드를 지정해 준다
head = node1  # 시작 노드를 알기 위해서 변수에 담아준다


# * 링크드 리스트에 데이터 추가하기
def add(data):
    node = head  # 제일 처음 노드를 담고
    while node.next:  # 마지막 노드일 때까지 계속 while을 돌린다
        node = node.next

    # 마지막 노드에 오면 새로운 데이터를 가진 노드를 생성해준다
    node.next = Node(data)


# * 테스트
for i in range(3, 10):
    add(i)

node = head
while node.next:
    print(node.data)
    node = node.next
print(node.data)

# 링크드리스트의 장단점(전통적인 C언어에서의 배열과 링크드 리스트)
# 장점
# 미리 데이터 공간을 할당하지 않아도 된다(배열은 미리 해야함)
# 단점
# 연결을 위한 별도 데이터 공간이 필요하므로, 저장공간 효율이 높지 않음
# 연결 정보를 찾는 시간이 필요하므로 접근 속도가 느림
# 중간 데이터 삭제 시, 앞 뒤 데이터의 연결을 재구성해야 하는 부가적인 작업 필요
