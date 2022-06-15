#include<cstdio>
#include<queue>
#define MAXN 1005
#define MAXM 100005
using namespace std;
struct node{
	int k,v;
	node(int a,int b):k(a),v(b){}
	bool operator<(const node&b)const
	{return k>b.k;}
};
int n,m,x,i,j,nxt1[MAXM],nxt2[MAXM],
	to1[MAXM],to2[MAXM],head1[MAXN],
	head2[MAXN],wt1[MAXM],wt2[MAXM],
	fin1[MAXN]={},fin2[MAXN]={},
	ans1[MAXN],ans2[MAXN];
int main(){
	scanf("%d%d%d",&n,&m,&x);
	x--;
	for(i=0;i<n;i++){
		head1[i]=head2[i]=-1;
		ans1[i]=ans2[i]=1e8;
	}
	for(i=0;i<m;i++){
		int u,v,w;
		scanf("%d%d%d",&u,&v,&w);
		u--;v--;
		nxt1[i]=head1[u];
		head1[u]=i;
		to1[i]=v;
		wt1[i]=w;

		nxt2[i]=head2[v];
		head2[v]=i;
		to2[i]=u;
		wt2[i]=w;
	}
	priority_queue<node> q;
	q.push(node(ans1[x]=0,x));
	while(!q.empty()){
		node tmp=q.top();
		q.pop();
		i=tmp.v;
		if(fin1[i])continue;
		fin1[i]=1;
		for(j=head1[i];~j;j=nxt1[j]){
			if(ans1[i]+wt1[j]<ans1[to1[j]]){
				ans1[to1[j]]=ans1[i]+wt1[j];
				q.push(node(ans1[to1[j]],to1[j]));
			}
		}
	}
	q.push(node(ans2[x]=0,x));
	while(!q.empty()){
		node tmp=q.top();
		q.pop();
		i=tmp.v;
		if(fin2[i])continue;
		fin2[i]=1;
		for(j=head2[i];~j;j=nxt2[j]){
			if(ans2[i]+wt2[j]<ans2[to2[j]]){
				ans2[to2[j]]=ans2[i]+wt2[j];
				q.push(node(ans2[to2[j]],to2[j]));
			}
		}
	}
	int ans=0;
	for(i=0;i<n;i++)
		if(ans1[i]+ans2[i]>ans)
			ans=ans1[i]+ans2[i];
	printf("%d\n",ans);
	return 0;
}