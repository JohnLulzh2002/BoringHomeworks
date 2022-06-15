#include<cstdio>
#include<algorithm>
#include<queue>
#define MAXN 2502
#define MAXM 12500
using namespace std;
int to[MAXM],nxt[MAXM],wt[MAXM],
	head[MAXN],fin[MAXN],ans[MAXN];
void add(int x,int y,int w){
	static int c=0;
	nxt[c]=head[x];
	head[x]=c;
	wt[c]=w;
	to[c++]=y;
}
int main(){
	int n,m,s,t,u,v,w,i;
	scanf("%d%d%d%d",&n,&m,&s,&t);
	while(n--){
		ans[n+1]=1e9;
		head[n+1]=-1;
	}
	while(m--){
		scanf("%d%d%d",&u,&v,&w);
		add(u,v,w);
		add(v,u,w);
	}
	typedef pair<int,int> Pii;
	priority_queue<Pii,vector<Pii>,greater<Pii> > q;
	q.push(make_pair(ans[s]=0,s));
	while(!q.empty()){
		v=q.top().second;
		q.pop();
		if(fin[v])continue;
		fin[v]=1;
		if(v==t)break;
		for(i=head[v];~i;i=nxt[i])
			if(ans[v]+wt[i]<ans[to[i]]){
				ans[to[i]]=ans[v]+wt[i];
				q.push(make_pair(ans[to[i]],to[i]));
			}
	}
	printf("%d\n",ans[t]);
	return 0;
}