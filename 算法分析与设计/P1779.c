#include<stdio.h>
#include<stdlib.h>
typedef struct tmp{
	int p,x;
}Pair;
int cmp(const void*a,const void*b)
{return ((Pair*)a)->p-((Pair*)b)->p;}
Pair a[100005];
int main(){
	int n,m,ans,i,r;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i].p,&a[i].x);
	qsort(a,n,sizeof(Pair),cmp);
	ans=a[0].p;
	r=a[0].p+a[0].x;
	for(i=1;i<n;i++){
		int t=a[i].p+a[i].x;
		if(a[i].p<=r&&t>r)
			r=t;
		else if(a[i].p>r){
			ans+=a[i].p-r;
			r=t;
		}
	}
	if(r<m)
		ans+=m-r;
	printf("%d\n",ans);
	return 0;
}