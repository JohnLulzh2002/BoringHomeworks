n = int(input())
for i in range(10**(n-1)-1,10**n):
    if sum((int(x)**n for x in str(i)))==i:
        print(i)