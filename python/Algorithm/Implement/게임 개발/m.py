import time

start_time = time.time()

n, m = map(int, input().split())

d = [[0] * m for i in range(n)]
x, y, dir = map(int, input().split())
d[x][y] = 1

array = []
for i in range(n):
    array.append(list(map(int, input().split())))

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]


def turn_left():
    global dir
    dir -= 1
    if dir == -1:
        dir = 3


cnt = 1
turn_time = 0
while True:
    turn_left()
    nx = x + dx[dir]
    ny = y + dy[dir]
    if d[nx][ny] == 0 and array[nx][ny] == 0:
        d[nx][ny] = 1
        x = nx
        y = ny
        cnt += 1
        turn_time = 0
        continue
    else:
        turn_time += 1

    if turn_time == 4:
        nx = x - dx[dir]
        ny = y - dx[dir]
        if array[nx][ny] == 0:
            x = nx
            y = ny
        else:
            break
        turn_time = 0

print(cnt)


end_time = time.time()
print('time :', end_time - start_time)
