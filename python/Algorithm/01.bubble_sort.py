data = list(map(int, input().split()))

for i in range(len(data)):
    swap = False
    for j in range(i + 1, len(data)):
        if data[i] > data[j]:
            data[i], data[j] = data[j], data[i]
            swap = True

    if swap == False:
        break

print(data)
