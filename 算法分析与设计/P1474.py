try:
    while 1:
        n=int(input())
        a=sorted([int(x)for x in input().split()])
        while len(a)>1:
            a=sorted(a[2:]+[a[0]*a[1]+1])
        print(*a)
except EOFError:
    pass