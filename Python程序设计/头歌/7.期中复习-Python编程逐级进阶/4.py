#3 选择结构
year=eval(input())
month=eval(input())
#   请在此补全代码   #
# ********** Begin *********#
a=(1,3,5,7,8,10,12)
b=(4,6,9,11)
if month in a:
    days=31
elif month in b:
    days=30
elif month==2:
    if (year%4==0 and year%100!=0)or year%400==0:
        days=29
    else:
        days=28
else:
    days='输入异常'
# ********** End **********#
print(days)