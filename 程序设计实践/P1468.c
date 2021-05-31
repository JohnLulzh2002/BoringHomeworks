#include<stdio.h>
int a[33],n;
void dfs(int p){
	int i,s=0;
	if(p==n){
		for(i=0;i<p;i++)
			printf("%d",a[i]);
		printf("\n");
		return;
	}
	for(i=0;i<p;i++)
		s=10*(s+a[i])%(p+1);
	for(i=p?0:1;i<10;i++)
		if((s+i)%(p+1)==0){
			a[p]=i;
			dfs(p+1);
		}
}
int main(){
	while(~scanf("%d",&n))
		dfs(0);
	return 0;
}