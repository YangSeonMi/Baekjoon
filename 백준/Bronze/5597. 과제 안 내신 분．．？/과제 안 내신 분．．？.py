sun = []

for _ in range(28):
    num = int(input())
    sun.append(num)

all_student = set(range(1, 31))

x = list(all_student - set(sun))
x.sort()

for s in x:
    print(s)