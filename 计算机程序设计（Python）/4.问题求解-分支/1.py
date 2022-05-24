n = eval(input()) #获取n的值
########## Begin ##########
an=(n*n-1)//2 if n%2 else n*n//2
########## End ##########
print(int(an))    #打印大衍数列第n项的值an