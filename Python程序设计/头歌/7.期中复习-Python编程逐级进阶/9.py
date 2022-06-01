N = eval(input())
# ********** Begin *********#
pi=3
term=3
for i in range(1,N+1):
    term=-(-1)**i*4/(2*i)/(2*i+1)/(2*i+2)
    pi+=term
# ********** End **********#
print('%.8f' % pi)
print('%.8f' % abs(term))