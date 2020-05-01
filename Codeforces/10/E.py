n = int(input())

prev = list()

for i in range(0, n):
    s = input()
    prev.append(s)

count = 0
for j in range(0, n):
    q = input()
    flag = 0
    index = -1
    for k in range(0, len(prev)):
        print(k)
        print(len(prev[k]))
        if len(q) == len(prev[k]) and q != prev[k]:
            flag = 1
            index = k
        if q == prev[k]:
            flag = 0
            index = k
            break
    if flag != 0:
        count += 1
    prev.remove(prev[index])
    print(prev)

print(count)
