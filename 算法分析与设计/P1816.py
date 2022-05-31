for T in range(int(input())):
    n,m,k=map(int,input().split())
    q=set([int(x)for x in input().split()])
    dp=[0 for i in range(n)]
    dp[0]=1 if min(q)==1 else 0
    f=lambda x:dp[x]
    for i in range(1,n):
        t=dp[:i] if i<k else dp[i-k:i]
        dp[i]=min(t)+(i+1 in q)
    print(dp[-1])