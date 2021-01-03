#include<stdio.h>
int prime(int n){
	int i=2,s=1;
	for(;i*i<=n;i++)
		if(!(n%i))
			return 0;
	return 1;
}
int main(){
	int n,a,b,t;
	for(scanf("%d",&n);n;n--){
		scanf("%d",&a);
		b=0;t=a;
		while(t){
			b*=10;
			b+=t%10;
			t/=10;
		}
		if(prime(a)&&prime(b))
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}