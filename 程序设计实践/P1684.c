#include<stdio.h>
int amicable(int n){
	int i=1,c=0;
	for(;i<n;i++)if(n%i==0)
		c+=i;
	return c;
}
int main(){
	int m;
	scanf("%d",&m);
	while(m--){
		int a,b;
		scanf("%d%d",&a,&b);
		if(amicable(a)==b&&amicable(b)==a)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}