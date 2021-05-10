from math import sqrt
def isPrime(n):
    if n==1:
        return False
    for i in range(2,int(sqrt(n))+1):
        if n%i==0:
            return False
    return True
for i in range(1,50):
    if isPrime(i):
        print(i)