class Sieve(object):
    def __init__(self,max=1000000):
        self.notPrime=[False for i in range(max)]
        self.notPrime[1]=True
        self.prime=[]
        for i in range(2,max):
            if not self.notPrime[i]:
                self.prime.append(i)
            for j in self.prime:
                if i*j>=max:
                    break
                self.notPrime[i*j]=True
    def isPrime(self,n):
        return not self.notPrime[n]

instance=Sieve()
for i in range(1,50):
    if instance.isPrime(i):
        print(i)