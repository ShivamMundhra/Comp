x = input()
y = input()
s = ""
for i in range(0, len(x)):
    if ord(y[i]) <= ord(x[i]):
        s += y[i]
    # elif ord(y[i]) == ord(x[i]):
    #     s += chr(ord(y[i])+1)
    else:
        print("-1")
        quit()
print(s)
