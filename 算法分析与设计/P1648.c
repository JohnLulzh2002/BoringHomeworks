#include<stdio.h>
int fa[1000005];
int f(int x){
	if(fa[x]==x)return x;
	return fa[x]=f(fa[x]);
}
int main(){
	int n,a,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		fa[i]=i;
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		fa[f(a)]=f(i);
	}
	a=1;
	for(i=1;i<=n;i++)
		if(f(i)==i)
			a=a*2%998244353;
	printf("%d",a-1);
	return 0;
}