# coding=utf-8

# 创建并初始化menu_dict字典
menu_dict = {}
while True:
    try:
        food = input()
        price = int(input())
        menu_dict[food] = price
    except:
        break

# 请在此添加代码，实现对menu_dict的遍历操作并打印输出键与值
########## Begin ##########
for i in menu_dict.keys():
    print(i)
for i in menu_dict.values():
    print(i)
########## End ##########