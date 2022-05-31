try:
    d=[]
    while 1:
        d+=[int(x)for x in input().split()]
except EOFError:
    pass
while d:
    n=d.pop(0)
    if len(d)<2*n:
        break
    a=d[:n]
    b=d[n:2*n]
    d=d[2*n:]
    def f(x):
        if x[0]<x[1]:
            return (-1,x[0],-x[1])
        if x[0]>x[1]:
            return (1,-x[1],x[0])
        return (0,x[0],-x[1])
    c=sorted(zip(a,b,range(1,n+1)),key=f)
    a=b=0
    for i in c:
        a+=i[0]
        if a>b:
            b=a
        b+=i[1]
    print(b)