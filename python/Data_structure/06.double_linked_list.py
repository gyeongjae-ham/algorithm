# 링크드 리스트의 단점인 검색 능력을 보완한 더블 링크드 리스트
# 앞 뒤로 검색이 가능하다


class Node:
    def __init__(self, data, prev=None, next=None):
        self.data = data
        self.prev = prev
        self.next = next


class NodeMgmt:
    def __init__(self, data):
        self.head = Node(data)
        self.tail = self.head

    def insert(self, data):
        if self.head == None:
            self.head = Node(data)
            self.tail = self.head
        else:
            node = self.head

            while node.next:
                node = node.next
            # 마지막에 도달한 후 새로운 노드 생성
            new = Node(data)
            # 마지막이었던 노드의 다음 노드가 새로운 노드
            node.next = new
            # 새로운 노드의 이전 노드를 마지막이었던 노드로 지정
            new.prev = node
            # 제일 마지막 노드를 새로운 노드로 지정해주기
            self.tail = new

    def desc(self):
        node = self.head
        while node:
            print(node.data)
            node = node.next

    def search_from_head(self, data):
        if self.head == None:
            return False

        node = self.head
        while node:
            if node.data == data:
                print(node.data)
                return
            else:
                node = node.next

        return False

    def search_from_tail(self, data):
        if self.tail == None:
            return False

        node = self.tail
        while node:
            if node.data == data:
                print(node.data)
                return
            else:
                node = node.prev

        return False

    def insert_before(self, data, before_data):
        if self.head == None:
            self.head = Node(data)
            return True
        else:
            node = self.tail
            while node.data != before_data:
                node = node.prev
                if node == None:
                    return False

            new = Node(data)
            before_new = node.prev
            before_new.next = new
            new.prev = before_new
            new.next = node
            node.prev = new


double_linked_list = NodeMgmt(0)

for data in range(1, 10):
    double_linked_list.insert(data)

double_linked_list.desc()

print("\n==========================\n")

double_linked_list.search_from_head(3)
double_linked_list.search_from_tail(8)

print("\n==========================\n")

double_linked_list.insert_before(1.5, 2)
double_linked_list.desc()
