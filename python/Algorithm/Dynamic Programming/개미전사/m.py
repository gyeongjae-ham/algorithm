import sys
import time

input = sys.stdin.readline

start_time = time.time()

n = int(input())
t = list(map(int, input().split()))
dp = [0] * 100

dp[0] = t[0]
dp[1] = max(t[0], t[1])

for i in range(2, n):
    dp[i] = max(dp[i - 1], dp[i - 2] + t[i])

print(dp[n - 1])

end_time = time.time()
print('time :', end_time - start_time)
