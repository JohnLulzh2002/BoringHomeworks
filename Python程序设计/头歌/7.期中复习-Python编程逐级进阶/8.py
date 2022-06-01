from math import log10 as l
N=eval(input())
# ********** Begin *********#
print('%.5f'%-sum((0.1*p*l(0.1*p)for p in range(1,N+1))))
# ********** End **********#