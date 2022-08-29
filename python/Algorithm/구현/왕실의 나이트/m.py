n = input()
row = int(n[1])
column = int(ord(n[0])) - int(ord('a')) + 1

dx = [-2, -1, 1, 2, 2, 1, -1, -2]
dy = [-1, -2, -2, -1, 1, 2, 2, 1]

cnt = 0
for i in range(8):
    nx = row + dx[i]
    ny = column + dy[i]

    if 1 <= nx <= 8 and 1 <= ny <= 8:
        cnt += 1

print(cnt)
