#include<stdio.h>
#include<stdlib.h>
#define Abs(a) (((a)>0?(a):(-(a))))
int cmp(const void*a,const void*b)
{return *(int*)a-*(int*)b;}
int main(){
	int n,x[100001],y[100001],xb,yb,i,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",x+i,y+i);
	qsort(x,n,sizeof(int),cmp);
	qsort(y,n,sizeof(int),cmp);
	for(i=0;i<n;i++)
		x[i]-=i;
	qsort(x,n,sizeof(int),cmp);
	if(n%2){
		xb=x[n/2];
		yb=y[n/2];
	}else{
		xb=(x[n/2]+x[n/2-1])/2;
		yb=(y[n/2]+y[n/2-1])/2;
	}
	for(i=0;i<n;i++)
		ans+=Abs(x[i]-xb)+Abs(y[i]-yb);
	printf("%d",ans);
	return 0;
}