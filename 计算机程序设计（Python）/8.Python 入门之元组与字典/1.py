# coding=utf-8

# 创建并初始化menu_list列表
menu_list = []
while True:
    try:
        food = input()
        menu_list.append(food)
    except:
        break

# 请在此添加代码，对menu_list进行元组转换以及元组计算等操作，并打印输出元组及元组最大的元素
###### Begin ######
print(tuple(menu_list))
print(max(menu_list))
#######  End #######