import time

start_time = time.time()

n, m = map(int, input().split())

min_num = 0

for _ in range(n):
    data = list(map(int, input().split()))
    min_data = min(data)
    res = max(min_num, min_data)

print(res)

end_time = time.time()
print('time :', end_time - start_time)
