#3 选择结构
grade = eval(input())

#   请在此补全代码   #
# ********** Begin *********#
if grade<0 or grade>100:
    level='异常'
elif grade<60:
    level='不及格'
elif grade<80:
    level='合格'
elif grade<90:
    level='良好'
else:
    level='优秀'
# ********** End **********#
print(level)