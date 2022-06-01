x1 = int(input())#获取第1次按键
x2 = int(input())#获取第2次按键
########## Begin ##########
if x1==1:
    if x2==1:
        print('话费查询')
    else:
        print('账单查询')
else:
    if x2==1:
        print('话费充值')
    else:
        print('流量套餐')
########## End ##########
