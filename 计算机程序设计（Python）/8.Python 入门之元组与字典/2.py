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

# 请在此添加代码，实现对menu_dict的添加、查找、修改等操作，并打印输出相应的值
########## Begin ##########
menu_dict['lamb']=50
print(menu_dict['fish'])
menu_dict.pop('noodles')
menu_dict['fish']=100
print(menu_dict)
########## End ##########