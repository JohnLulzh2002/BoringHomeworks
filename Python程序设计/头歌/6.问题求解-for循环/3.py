import math
n = int(input())
########## Begin ##########
e=1
d=1
for i in range(1,n+1):
    d*=i
    e+=1/d
########## End ##########
print('%.14f' % e)