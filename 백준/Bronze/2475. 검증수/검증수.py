nums = list(map(int, input().split()))

res = 0
for i in nums:
    res += i*i

print(res%10)