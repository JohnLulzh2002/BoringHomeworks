n,t=map(int,input().split())
gold=[[int(x)for x in input().split()]for i in range(n)]
gold.sort(key=lambda x:x[1]/x[0],reverse=True)
ans=0
for i in gold:
    if i[0]<=t:
        ans+=i[1]
        t-=i[0]
    else:
        ans+=t*i[1]/i[0]
        break
print('%.2f'%ans)