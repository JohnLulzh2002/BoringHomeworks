from math import exp,sin,pi
n = int(input())
########## Begin ##########
f=lambda x:exp(x)*sin(x)
dx=pi/n
s=0
for i in range(n):
    s+=(f(dx*i)+f(dx*(i+1)))*dx/2
########## End ##########
print('%.4f' % s)