
# * 데이터를 제한적으로 접근할 수 있는 구조
# * 한 쪽 끝에서만 자료를 넣거나 뺄 수 있는 구조
# * 가장 나중에 쌓은 데이터를 가장 먼저 빼낼 수 있는 데이터 구조

# * 스택 구조
# * 스택은 LIFO 데이터 관리 방식을 따른다
# * 컴퓨터 내부의 프로세스 구조의 함수 동작 방식에 활용된다
# * push(): 데이터를 스택에 넣기
# * pop(): 데이터를 스택에서 꺼내기

# * 리스트로 스택 구조 활용하기

data_stack = list()

data_stack.append(1)
data_stack.append(2)

print(data_stack)
print(data_stack.pop())
print(data_stack)

print("==================================")

# * 스택 구현해보기

stack_list = list()


def push(data):
    stack_list.append(data)


def pop():
    data = stack_list[-1]
    del stack_list[-1]
    return data


for i in range(10):
    push(i)

print(stack_list)
print(pop())
