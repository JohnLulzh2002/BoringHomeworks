#include<stdio.h>
int main(){
	int m,n,ans,k;
	scanf("%d%d",&n,&m);
	ans=m*n;
	while(ans>n){
		k=(ans-n-1)/(m-1);
		ans=ans-n+k;
	}
	printf("%d",ans);
	return 0;
}