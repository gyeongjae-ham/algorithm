import time

start_time = time.time()

n = int(input())
cnt = 0
types = [500, 100, 50, 10]

for i in types:
    cnt += n // i
    n = n % i

print(cnt)

end_time = time.time()
print('time :', end_time - start_time)
