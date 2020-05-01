i = input()
sarr = i.split(":")
t = int(sarr[0])
l = int(sarr[1])
if t >= 12:
    t -= 12
ang2 = 6*l
tempAng = 30*(l/60)
ang1 = (30*t) + tempAng
if ang1==int(ang1):
  ang1=int(ang1)
print(str(ang1)+" "+str(int(ang2)))