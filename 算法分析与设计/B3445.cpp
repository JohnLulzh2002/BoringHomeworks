#include<cstdio>
#include<algorithm>
#include<queue>
#define MAXN 1502
#define MAXM 10005
using namespace std;
int n,to[MAXM],nxt[MAXM],wt[MAXM],
	head[MAXN],fin[MAXN],ans[MAXN];
void add(int x,int y,int w){
	static int c=0;
	nxt[c]=head[x];
	head[x]=c;
	wt[c]=w;
	to[c++]=y;
}
int dij(){
	int i,j,m,mi;
	j=n;
	ans[1]=0;
	while(j--){
		m=1e9;
		for(i=1;i<=n;i++){
			if(fin[i])continue;
			if(ans[i]<m){
				m=ans[i];
				mi=i;
			}
		}
		fin[mi]=1;
		for(i=head[mi];~i;i=nxt[i])
			if(ans[mi]+wt[i]<ans[to[i]]){
				ans[to[i]]=ans[mi]+wt[i];
			}
	}
	return ans[n];
}
int main(){
	int m,i,o,op,a[MAXM],b[MAXM],l[MAXM],q=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		ans[i]=1e9;
		head[i]=-1;
	}
	for(i=1;i<=m;i++){
		scanf("%d%d%d",a+i,b+i,l+i);
		add(a[i],b[i],l[i]);
		add(b[i],a[i],l[i]);
	}
	o=dij();
	for(i=0;i<2*m;i++){
		for(op=1;op<=n;op++){
			fin[op]=0;
			ans[op]=1e9;
		}
		wt[i]*=2;
		op=dij()-o;
		if(op>q)q=op;
		wt[i]/=2;
	}
	printf("%d\n",q);
	return 0;
}