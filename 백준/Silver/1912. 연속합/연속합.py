n = int(input())
arr = list(map(int, input().split()))
m = arr[0]
t = arr[0]

for i in range(1, n):
    t = max(arr[i], t+arr[i])
    m = max(t, m)

print(m)