from math import sqrt
x = eval(input())   #获取x的值
########## Begin ##########
if x<0:
    y=10-sqrt(x**4+4)
elif x<=1:
    y=8-6*sqrt(x)
else:
    y=1+x*x
########## End ##########
print('%.4f' % (y)) #打印函数值（保留4位小数）