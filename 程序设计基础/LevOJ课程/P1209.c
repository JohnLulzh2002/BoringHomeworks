#include<stdio.h>
int notPrime[10003]={1,1};
int main(){
	int i,j,m;
	for(i=2;i<5001;i++)
		if(!notPrime[i])
			for(j=i*2;j<10001;j+=i)
				notPrime[j]++;
	while(~scanf("%d",&m)){
		for(i=m;notPrime[i]||notPrime[i-2];i--);
		printf("%d %d\n",i-2,i);
	}
	return 0;
}