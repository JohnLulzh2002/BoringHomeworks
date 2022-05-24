a = eval(input())
b = eval(input())
c = eval(input())
#   请在此补全代码   #
# ********** Begin *********#
from math import gcd as g
result=g(g(a,b),c)
# ********** End **********#
print(result)