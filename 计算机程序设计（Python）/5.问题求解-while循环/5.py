n = int(input())
########## Begin ##########
a=b=0
t=1
u=1
for i in range(1,n+1):
    a+=u/t/5**t
    b+=u/t/239**t
    u=-u
    t+=2
pi=16*a-4*b
########## End ##########
print('%.14f' % pi)