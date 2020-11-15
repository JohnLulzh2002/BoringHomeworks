#include<stdio.h>
int prime(int n){
	int i=2,s=1;
	for(;i*i<=n;i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main(){
	int n,a,b;
	for(scanf("%d",&n);n;n--){
		scanf("%d",&a);
		if(prime(a)){
			b=0;
			while(a){
				b*=10;
				b+=a%10;
				a/=10;
			}
			if(prime(b))
				printf("1\n");
			else printf("0\n");
		}
		else printf("0\n");
	}
	return 0;
}
