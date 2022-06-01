ID = [1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008]
name = ['张三', '李四', '王五', '赵六', '钱七', '孙八', '周九', '吴十']
grade = [100, 87, 65, 58, 78, 65, 69, 85]
a = eval(input())
b = eval(input())
########## Begin ##########
t=True
for j in range(8):
    if grade[j]>=a and grade[j]<=b:
        print(ID[j],name[j])
        t=False
if t:
    print('未找到')
########## End ##########