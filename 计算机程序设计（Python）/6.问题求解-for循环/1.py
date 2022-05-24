n = int(input())
########## Begin ##########
for i in range(n):
    print(' '*(n-1-i),end='')
    print('*'*(i*2+1),end='')
    print(' '*(n-1-i))
########## End ##########