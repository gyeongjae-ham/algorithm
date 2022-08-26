import time

start_time = time.time()

n, m, k = map(int, input().split())
nums = list(map(int, input().split()))

nums.sort()
f = nums[-1]
s = nums[-2]

res = 0

while True:
    for i in range(k):
        if m == 0:
            break
        res += f
        m -= 1
    if m == 0:
        break
    res += s
    m -= 1

print(res)

end_time = time.time()
print('time :', end_time - start_time)
