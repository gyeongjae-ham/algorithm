import queue

# * FIFO queue
data_queue = queue.Queue()

data_queue.put("funcoding")
data_queue.put(1)

print(data_queue.qsize())

print(data_queue.get())
print(data_queue.qsize())

print(data_queue.get())
print(data_queue.qsize())

print("==============================")

# * LIFO queue

data_queue2 = queue.LifoQueue()

data_queue2.put("funcoding")
data_queue2.put(1)

print(data_queue2.qsize())

print(data_queue2.get())
print(data_queue2.qsize())

print(data_queue2.get())
print(data_queue2.qsize())

print("==============================")

# * PriorityQueue

data_queue3 = queue.PriorityQueue()

# * 첫 번째 데이터가 우선순위 뒤 데이터가 값
# * 숫자가 낮을수록 우선 순위가 높다

data_queue3.put((10, "korea"))
data_queue3.put((5, 1))
data_queue3.put((15, "china"))

print(data_queue3.qsize())
print(data_queue3.get())
print(data_queue3.get())

# * 큐가 많이 사용되는 곳
# * 멀티 태스킹을 위한 프로세스 스케쥴링 방식을 구현하기 위해 많이 사용됨(운영체제 참조)

print("==============================")

# * 큐 리스트로 구현해 보기

queue_list = list()


def enqueue(data):
    queue_list.append(data)


def dequeue():
    data = queue_list[0]
    del queue_list[0]
    return data


for i in range(10):
    enqueue(i)

print(len(queue_list))
print(dequeue())
