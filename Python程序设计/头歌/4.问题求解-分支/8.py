y = int(input())    #获取年份
m = int(input())    #获取月份
########## Begin ##########
a=(1,3,5,7,8,10,12)
b=(4,6,9,11)
if m in a:
    print(31)
elif m in b:
    print(30)
else:
    if (y%4==0 and y%100!=0)or y%400==0:
        print(29)
    else:
        print(28)
########## End ##########