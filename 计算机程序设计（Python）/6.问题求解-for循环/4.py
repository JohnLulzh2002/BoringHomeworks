import math
n = int(input())
x = eval(input())
x = math.radians(x)
########## Begin ##########
if n<0:
    print('输入错误')
    exit()
ans=x
u,d=x,1
x*=x
for i in range(n):
    u*=-x
    d*=(2*i+2)*(2*i+3)
    ans+=u/d
print('%.8f'%ans)