tr = input()
s = input()
q = s.split(" ")
p1 = q[0]
p2 = q[1]
flag = 0
if p1[1] == p2[1]:
    if p2[0] == "6" and p1[0] in ["7", "8", "9", "T", "J", "Q", "K", "A"]:
        flag = 1
    if p2[0] == "7" and p1[0] in ["8", "9", "T", "J", "Q", "K", "A"]:
        flag = 1
    if p2[0] == "8" and p1[0] in ["9", "T", "J", "Q", "K", "A"]:
        flag = 1
    if p2[0] == "9" and p1[0] in ["T", "J", "Q", "K", "A"]:
        flag = 1
    if p2[0] == "T" and p1[0] in ["J", "Q", "K", "A"]:
        flag = 1
    if p2[0] == "J" and p1[0] in ["Q", "K", "A"]:
        flag = 1
    if p2[0] == "Q" and p1[0] in ["K", "A"]:
        flag = 1
    if p2[0] == "K" and p1[0] in ["A"]:
        flag = 1
elif p1[1] != p2[1] and p1[1] == tr:
    flag = 1

if flag == 1:
    print("YES")
else:
    print("NO")
