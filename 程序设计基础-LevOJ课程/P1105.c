#include<stdio.h>
int isprime(int n){
	int i=2;
	for(;i*i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main(){
	int n,i;
	while(scanf("%d",&n)==1)
		for(i=2;1;i++){
			if(isprime(i)&&isprime(n-i)){
				printf("%d+%d\n",i,n-i);
				break;
			}
		}
	return 0;
}
