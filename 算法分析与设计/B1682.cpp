#include<cstdio>
#include<algorithm>
using namespace std;
struct node{
	int a,b,l;
	node(){}
	node(int _a,int _b,int _l):a(_a),b(_b),l(_l){}
	bool operator<(const node& q)const
	{return l<q.l;}
};
int cmp(const void*a,const void*b)
{return ((node*)a)->l-((node*)b)->l;}
int fa[2002];
int f(int x){
	if(x==fa[x])return x;
	return fa[x]=f(fa[x]);
}
int main(){
	int n,m,i,q,w,e,ans=0;
	node a[10004];
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d%d%d",&q,&w,&e);
		a[i]=node(q-1,w-1,e);
	}
	sort(a,a+m);
	for(i=0;i<n;i++)
		fa[i]=i;
	for(i=0;i<m;i++)
		if(f(a[i].a)!=f(a[i].b)){
			if(a[i].l>ans)ans=a[i].l;
			fa[fa[a[i].a]]=fa[a[i].b];
		}
	printf("%d",ans);
	return 0;
}