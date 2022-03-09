n,k=[int(x)for x in input().split()]
b=[int(x)for x in input().split()]
a=[]
for i in range(1,n+1):
    if b[i-1]==k:
        a.append(i)
e=1
ans=len(a)
deleted=0
for i in a:
    while i>=2*e:
        e*=2
    if i-e>deleted:
        ans+=i-e-deleted
        deleted=i-e
    deleted+=1
print(ans)