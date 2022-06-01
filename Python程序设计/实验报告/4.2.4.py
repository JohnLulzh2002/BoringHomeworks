n=int(input())
ans=0
fac=1
for i in range(1,n+1):
    fac*=i
    ans+=fac
print(ans)