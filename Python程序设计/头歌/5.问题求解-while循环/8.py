n = int(input())
########## Begin ##########
a=b=n
s=n
while n>1 or a>1 or b>3:
    n=a//2+b//4
    a=a%2+n
    b=b%4+n
    s+=n
print(s)
########## End ##########