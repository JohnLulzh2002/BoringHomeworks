m=eval(input())
#   请在此补全代码   #
# ********** Begin *********#
result=True
for i in range(2,m):
    if m%i==0:
        result=False
# ********** End **********#
print(result)