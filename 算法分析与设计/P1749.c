#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct point{
	double x,y;
}point;
point a[200002],b[200002];
int cmp1(const void*a,const void*b){
	double i=((point*)a)->x,
		j=((point*)b)->x;
	return i>j;
}
int cmp2(const void*a,const void*b){
	double i=((point*)a)->y,
		j=((point*)b)->y;
	return i>j;
}
double dis(point i,point j){
	return sqrt((i.x-j.x)*(i.x-j.x)+
		(i.y-j.y)*(i.y-j.y));
}
double f(int l,int r){
	if(l==r)	return 2e9;
	if(l+1==r)	return dis(a[l],a[r]);
	int m=(l+r)/2,i,j,c=0;
	double d=f(l,m),d2=f(m+1,r);
	if(d2<d)	d=d2;
	for(i=l;i<=r;i++)
		if(a[i].x>a[m].x-d&&a[i].x<a[m].x+d)
			b[c++]=a[i];
	qsort(b,c,sizeof(point),cmp2);
	for(i=0;i<c-1;i++)
		for(j=i+1;j<c&&b[i].y+d>b[j].y;j++)
			if(dis(b[i],b[j])<d)
				d=dis(b[i],b[j]);
	return d;
}
int main(){
	int n,i;
	double ans=1e9;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&a[i].x,&a[i].y);
	qsort(a,n,sizeof(point),cmp1);
	printf("%.4lf",f(0,n-1));
	return 0;
}