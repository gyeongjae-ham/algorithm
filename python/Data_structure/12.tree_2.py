import random

"""
삭제의 경우
1. Leaf Node 삭제
2. Child Node가 하나인 Node 삭제
3. Child Node가 두 개인 Node 삭제(두 가지 방법 중 하나)
    - 삭제할 Node의 오른쪽 Node들 중 가장 작은 Node를 삭제할 Node 위치로 올린다
    - 삭제할 Node의 왼쪽 Node들 중 가장 큰 Node를 삭제할 Node 위치로 올린다
"""


class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


class NodeMgmt:
    def __init__(self, head):
        self.head = head

    def insert(self, value):
        self.current_node = self.head
        while True:
            if value < self.current_node.value:
                if self.current_node.left != None:
                    self.current_node = self.current_node.left
                else:
                    self.current_node.left = Node(value)
                    break
            else:
                if self.current_node.right != None:
                    self.current_node = self.current_node.right
                else:
                    self.current_node.right = Node(value)
                    break

    def search(self, value):
        self.current_node = self.head
        while self.current_node:
            if self.current_node.value == value:
                return True
            elif value < self.current_node.value:
                self.current_node = self.current_node.left
            else:
                self.current_node = self.current_node.right
        return False

    def delete(self, value):
        searched = False
        self.current_node = self.head
        self.parent = self.head
        while self.current_node:
            if self.current_node.value == value:
                searched = True
                break
            elif value < self.current_node.value:
                self.parent = self.current_node
                self.current_node = self.current_node.left
            else:
                self.parent = self.current_node
                self.current_node = self.current_node.right

        # searched = True면 찾은 것 아니면 못 찾음
        if searched == False:
            return False

        # * Leaf Node일 경우
        if self.current_node.left == None and self.current_node.right == None:
            if value < self.parent.value:
                self.parent.left = None
            else:
                self.parent.right = None
            del self.current_node

        # * Child Node를 하나 가지고 있을 경우(삭제할 Node 왼쪽에 있을 경우)
        if self.current_node.left != None and self.current_node.right == None:
            # * 삭제할 Node가 Parent Node 왼쪽일 경우
            if value < self.parent.value:
                self.parent.left = self.current_node.left
            # * 삭제할 Node가 Parent Node 오른쪽일 경우
            else:
                self.parent.right = self.current_node.left

        # * Child Node를 하나 가지고 있을 경우(삭제할 Node 오른쪽에 있을 경우)
        elif self.current_node.left == None and self.current_node.right != None:
            # * 삭제할 Node가 Parent Node 왼쪽일 경우
            if value < self.parent.value:
                self.parent.left = self.current_node.right
            # * 삭제할 Node가 Parent Node 오른쪽일 경우
            else:
                self.parent.right = self.current_node.right

        # * Child Node를 두 개 가지고 있을 경우(삭제할 Node 오른쪽에서 가장 작은 값을 올리는 방법)
        if self.current_node.left != None and self.current_node.right != None:
            # ? 삭제할 Node가 Parent Node 왼쪽일 경우
            if value < self.parent.value:
                # * 올릴 Node가 오른쪽에 Child Node를 가질 경우가 있기 때문에 Parent Node를 볼 변수 할당
                self.change_node = self.current_node.right
                self.change_node_parent = self.change_node.right
                while self.change_node.left != None:
                    self.change_node_parent = self.change_node
                    self.change_node = self.change_node.left

                # * 만약 올릴 Node가 오른쪽에 Child Node를 가지고 있다면
                if self.change_node.right != None:
                    # * 해당 Child Node를 올릴 Node의 Parent Node의 왼쪽 Branch에 교체해준다
                    self.change_node_parent.left = self.change_node.right
                else:
                    # * Child Node를 가지고 있지 않다면 그냥 Parent Node의 왼쪽 Branch를 끊어준다
                    self.change_node_parent.left = None

                # * 올릴 Node를 삭제할 Node의 Parent Node의 left에 연결해준다
                self.parent.left = self.change_node
                self.change_node.right = self.current_node.right
                self.change_node.left = self.current_node.left

            # ? 삭제할 Node가 Parent Node 오른쪽일 경우
            else:
                self.change_node = self.change_node.right
                self.current_node_parent = self.change_node.right
                while self.change_node.left != None:
                    self.change_node_parent = self.change_node
                    self.change_node = self.change_node.left

                # * 만약 올릴 Node가 오른쪽에 Child Node를 가지고 있다면
                if self.change_node.right != None:
                    # * 해당 Child Node를 올릴 Node의 Parent Node의 왼쪽 Branch에 교체해준다
                    self.change_node_parent.left = self.change_node.right
                else:
                    # * Child Node를 가지고 있지 않다면 그냥 Parent Node의 왼쪽 Branch를 끊어준다
                    self.change_node_parent.left = None

                # * 올릴 Node를 삭제할 Node의 Parent Node의 right에 연결해준다
                self.parent.right = self.change_node
                self.change_node.right = self.current_node.right
                self.change_node.left = self.current_node.left


# * 1~1000 중에 임의로 100개를 입력, 검색, 삭제

bst_nums = set()
while len(bst_nums) != 100:
    bst_nums.add(random.randint(0, 999))

head = Node(500)
binary_tree = NodeMgmt(head)
for num in bst_nums:
    binary_tree.insert(num)

for num in bst_nums:
    if binary_tree.search(num) == False:
        print("search failed", num)

delete_nums = set()
bst_nums = list(bst_nums)
while len(delete_nums) != 10:
    delete_nums.add(bst_nums[random.randint(0, 99)])

for del_num in delete_nums:
    if binary_tree.delete(del_num) == False:
        print("delete failed", num)
