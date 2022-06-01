n = int(input())
########## Begin ##########
pi=0
u=1
d=1
for i in range(1,n+1):
    pi+=u/d
    u=-u
    d+=2
pi*=4
########## End ##########
print('%.6f' % pi)