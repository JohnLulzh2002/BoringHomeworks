#include<stdio.h>
#define MAX 1000005
int fa[MAX],nodes[MAX],edges[MAX];
int f(int x){
	if(fa[x]==x)return x;
	return fa[x]=f(fa[x]);
}
int main(){
	int T,t;
	scanf("%d",&T);
	for(t=1;t<=T;t++){
		int i,n,m,x,y,ans=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++){
			fa[i]=i;
			nodes[i]=1;
			edges[i]=0;
		}
		while(m--){
			scanf("%d%d",&x,&y);
			x=f(x-1);y=f(y-1);
			if(x!=y){
				nodes[x]+=nodes[y];
				edges[x]+=edges[y]+1;
				fa[y]=x;
			}else
				edges[x]++;
		}
		for(i=0;i<n;i++)
			if(f(i)==i&&edges[i]>nodes[i])
				ans+=edges[i]-nodes[i];
		printf("Case #%d: %d\n",t,ans);
	}
	return 0;
}