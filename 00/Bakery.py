t = input()
s = t.split(" ")
n = int(s[0])
m = int(s[1])
k = int(s[2])

t1 = list()
t2 = list()
t3 = list()
for i in range(0, m):
    w = input()
    d = w.split(" ")
    t1.append(int(s[0]))
    t2.append(int(s[1]))
    t3.append(int(s[2]))

min = 100000
for i in range(0, k):
    x = int(input())
    if x in t1:
