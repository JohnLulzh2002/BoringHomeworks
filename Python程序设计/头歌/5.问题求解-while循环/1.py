a = int(input())
b = int(input())
########## Begin ##########
for i in range(min(a,b),0,-1):
    if a%i==0 and b%i==0:
        break
print(i)
########## End ##########