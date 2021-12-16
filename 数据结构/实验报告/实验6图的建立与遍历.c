#include<stdio.h>
#include<stdlib.h>
#define MaxM 1000001
#define MaxN 100001
typedef struct tEdge{
	int to,weight;
	struct tEdge* next;
}Edge;
typedef struct tVertex{
	char data;
	Edge* edges;
}Vertex;
Vertex v[MaxN];
char vis1[MaxN],vis2[MaxN];
int n,m;
void dfs(int n){
	if(vis1[n])
		return;
	vis1[n]=1;
	printf("%c",v[n].data);
	Edge* p=v[n].edges;
	while(p->next){
		dfs(p->to);
		p=p->next;
	}
}
void setEdge(a,b,w){
	Edge* p=v[a].edges;
	while(p->next)
		p=p->next;
	p->to=b;
	p=p->next=malloc(sizeof(Edge));
	p->next=NULL;
}
int main(){
	scanf("%d%d",&n,&m);
	char s[100];
	scanf("%s",s+1);
	for(int i=1;i<=n;i++){
		v[i].data=s[i];
		v[i].edges=malloc(sizeof(Edge));
		v[i].edges->next=NULL;
	}
	for(int i=1;i<=m;i++){
		int a,b,w;
		scanf("%d%d%d",&a,&b,&w);
		setEdge(a,b,w);
		setEdge(b,a,w);
	}
	//dfs
	dfs(1);
	putchar('\n');
	//bfs
	int queue[MaxN]={1},l=0,r=1;
	vis2[1]=1;
	for(;l<r;l++){
		printf("%c",v[queue[l]].data);
		Edge* p=v[queue[l]].edges;
		for(;p->next;p=p->next){
			if(vis2[p->to])
				continue;
			vis2[p->to]=1;
			queue[r++]=p->to;
		}
	}
	putchar('\n');
	return 0;
}