import sys
import time

input = sys.stdin.readline

start_time = time.time()

n, m = map(int, input().split())
a = list(map(int, input().split()))

start = 0
end = max(a)

result = 0
while start <= end:
    mid = (start + end) // 2

    sum = 0
    for i in a:
        if i > mid:
            sum += i - mid

    if sum < m:
        end = mid - 1
    else:
        result = mid
        start = mid + 1

print(end)

end_time = time.time()
print('time :', end_time - start_time)
