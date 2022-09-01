import sys

input = sys.stdin.readline


def binary_search(array, target, start, end):
    if start > end:
        return None

    mid = (start + end) // 2
    if array[mid] == target:
        return True
    elif array[mid] > target:
        return binary_search(array, target, start, mid - 1)
    else:
        return binary_search(array, target, mid + 1, end)


n = int(input().rstrip())
a = list(map(int, input().split()))
m = int(input().rstrip())
b = list(map(int, input().split()))

for i in range(m):

    if binary_search(a, b[i], 0, n - 1) == True:
        print("yes", end=" ")
    else:
        print("no", end=" ")
