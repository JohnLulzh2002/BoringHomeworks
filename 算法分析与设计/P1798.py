n,m=map(int,input().split())
a=sorted([int(x)for x in input().split()])
b=sorted([a[x+1]-a[x]-1 for x in range(n-1)])
if m>=n:
    print(n)
else:
    print(n+sum(b[:n-m]))