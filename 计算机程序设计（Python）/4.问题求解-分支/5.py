from math import sqrt
a = eval(input())  #获取a的值
b = eval(input())  #获取b的值
c = eval(input())  #获取c的值
########## Begin ##########
d=b*b-4*a*c
if d>0:
    x1=(sqrt(d)-b)/2/a
    x2=(-sqrt(d)-b)/2/a
    x1=(sqrt(d)-b)/2/a
    print('x1=%.4f,x2=%.4f' %(x1,x2))
elif d==0:
    x1=-b/2/a
    print('x1=%.4f' %x1)
else:
    print('无实数根')
########## End ##########
