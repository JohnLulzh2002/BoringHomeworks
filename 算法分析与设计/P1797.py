n=int(input())
a=sorted(map(int,input().split()),reverse=True)
b=sorted(map(int,input().split()),reverse=True)
w=l=0
la=lb=0
ra=rb=n-1
while la<=ra:
    if a[la]>b[lb]:
        w+=1
        la+=1
        lb+=1
    elif a[la]<b[lb]:
        l+=1
        ra-=1
        lb+=1
    elif a[ra]>b[rb]:
        w+=1
        ra-=1
        rb-=1
    else:
        if a[ra]!=b[lb]:
            l+=1
        ra-=1
        lb+=1
print(200*w-200*l)