a = int(input())
b = int(input())
c = int(input())
########## Begin ##########
for i in range(max(a,b,c),9999999):
    if i%a==0 and i%b==0 and i%c==0:
        break
print(i)
########## End ##########