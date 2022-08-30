import time

start_time = time.time()

s = input()

strs = ""
num = 0
for i in range(len(s)):
    if 65 <= int(ord(s[i])) <= 90:
        strs += s[i]
    else:
        num += int(s[i])

strs = sorted(strs)
res = ""
for i in range(len(strs)):
    res += strs[i]

print(res + str(num))

end_time = time.time()
print('time :', end_time - start_time)
